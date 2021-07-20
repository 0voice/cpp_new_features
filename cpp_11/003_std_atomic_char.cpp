#include <thread>
#include <atomic>
#include <iostream>
#include <list>

using namespace std;

atomic_chat cCount(0);

void threadfun1()
{
    for(int i =0; i< 1000; i++)
    {
        printf("cCount:%d\r\n",  cCount);
    }    
}
void threadfun2()
{
    for(int i =0; i< 1000; i++)
    {
        printf("cCount:%d\r\n",  cCount);
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

    int x = cCount.load(memory_order_relaxed);
    printf("finally cCount:%d\r\n",  x);
}

