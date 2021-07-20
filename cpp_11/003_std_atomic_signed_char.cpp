#include <thread>
#include <atomic>
#include <iostream>
#include <list>

using namespace std;

atomic_schar scCount(0);

void threadfun1()
{
    for(int i =0; i< 1000; i++)
    {
        printf("cCount:%d\r\n",  scCount);
    }    
}
void threadfun2()
{
    for(int i =0; i< 1000; i++)
    {
        printf("scCount:%d\r\n",  scCount);
    }    
}

int main()
{
    std::list<thread> lstThread;
    for (int i=0; i< 100; i++)
    {
        lstThread.push_back(thread(threadfun1));
    }
    for (int i=0; i< 100; i++)
    {
        lstThread.push_back(thread(threadfun2));
    }
    
    for (auto& th: lstThread)
    {
        th.join();
    }

    int x = scCount.load(memory_order_relaxed);
    printf("finally scCount:%d\r\n",  x);
}
