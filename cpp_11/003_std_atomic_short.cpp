#include <thread>
#include <atomic>
#include <iostream>
#include <list>

using namespace std;

atomic_short shortCount(0);

void threadfun1()
{
    for(int i =0; i< 1000; i++)
    {
        printf("shortCount:%d\r\n",  shortCount);
    }    
}
void threadfun2()
{
    for(int i =0; i< 1000; i++)
    {
        printf("shortCount:%d\r\n",  shortCount);
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

    int x = shortCount.load(memory_order_relaxed);
    printf("finally shortCount:%d\r\n",  x);
}
