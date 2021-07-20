#include <thread>
#include <atomic>
#include <iostream>
#include <list>

using namespace std;

atomic_uint32_t uint32_tCount(0);

void threadfun1()
{
    for(int i =0; i< 1000; i++)
    {
        printf("uint32_tCount:%d\r\n",  uint32_tCount);
    }    
}
void threadfun2()
{
    for(int i =0; i< 1000; i++)
    {
        printf("uint32_tCount:%d\r\n",  uint32_tCount);
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

    int x = uint32_tCount.load(memory_order_relaxed);
    printf("finally uint32_tCount:%d\r\n",  x);
}



