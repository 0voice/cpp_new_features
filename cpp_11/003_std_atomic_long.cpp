#include <thread>
#include <atomic>
#include <iostream>
#include <list>

using namespace std;

atomic_long longCount(0);

void threadfun1()
{
    for(int i =0; i< 1000; i++)
    {
        printf("longCount:%ld\r\n",  longCount);
    }    
}
void threadfun2()
{
    for(int i =0; i< 1000; i++)
    {
        printf("longCount:%ld\r\n",  longCount);
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

    int x = longCount.load(memory_order_relaxed);
    printf("finally longCount:%ld\r\n",  x);
}

