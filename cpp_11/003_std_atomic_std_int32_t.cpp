#include <thread>
#include <atomic>
#include <iostream>
#include <list>

using namespace std;

atomic_int32_t int32_tCount(0);

void threadfun1()
{
    for(int i =0; i< 1000; i++)
    {
        printf("int32_tCount:%d\r\n",  int32_tCount);
    }    
}
void threadfun2()
{
    for(int i =0; i< 1000; i++)
    {
        printf("int32_tCount:%d\r\n",  int32_tCount);
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

    int x = int32_tCount.load(memory_order_relaxed);
    printf("finally int32_tCount:%d\r\n",  x);
}



