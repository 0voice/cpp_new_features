#include <thread>
#include <atomic>
#include <iostream>
#include <list>

using namespace std;

atomic_uchar ucCount(0);

void threadfun1()
{
    for(int i =0; i< 1000; i++)
    {
        printf("ucCount:%d\r\n",  ucCount);
    }    
}
void threadfun2()
{
    for(int i =0; i< 1000; i++)
    {
        printf("ucCount:%d\r\n",  ucCount);
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

    int x = ucCount.load(memory_order_relaxed);
    printf("finally ucCount:%d\r\n",  x);
}
