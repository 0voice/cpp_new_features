#include <thread>
#include <atomic>
#include <iostream>
#include <list>

using namespace std;

atomic_uint uintCount(0);

void threadfun1()
{
    for(int i =0; i< 1000; i++)
    {
        printf("uintCount:%d\r\n",  uintCount);
    }    
}
void threadfun2()
{
    for(int i =0; i< 1000; i++)
    {
        printf("uintCount:%d\r\n",  uintCount);
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

    int x = uintCount.load(memory_order_relaxed);
    printf("finally uintCount:%d\r\n",  x);
}

