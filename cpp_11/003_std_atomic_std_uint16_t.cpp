#include <thread>
#include <atomic>
#include <iostream>
#include <list>

using namespace std;

atomic_uint16_t uint16_tCount(0);

void threadfun1()
{
    for(int i =0; i< 1000; i++)
    {
        printf("uint16_tCount:%d\r\n",  uint16_tCount);
    }    
}
void threadfun2()
{
    for(int i =0; i< 1000; i++)
    {
        printf("uint16_tCount:%d\r\n",  uint16_tCount);
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

    int x = uint16_tCount.load(memory_order_relaxed);
    printf("finally uint16_tCount:%d\r\n",  x);
}



