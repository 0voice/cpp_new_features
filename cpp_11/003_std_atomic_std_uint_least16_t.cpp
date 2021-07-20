#include <thread>
#include <atomic>
#include <iostream>
#include <list>

using namespace std;

atomic_uint_least16_t uint_least16_t_tCount(0);

void threadfun1()
{
    for(int i =0; i< 1000; i++)
    {
        printf("uint_least16_t_tCount:%d\r\n",  uint_least16_t_tCount);
    }    
}
void threadfun2()
{
    for(int i =0; i< 1000; i++)
    {
        printf("uint_least16_t_tCount:%d\r\n",  uint_least16_t_tCount);
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

    int x = uint_least16_t_tCount.load(memory_order_relaxed);
    printf("finally uint_least16_t_tCount:%d\r\n",  x);
}





