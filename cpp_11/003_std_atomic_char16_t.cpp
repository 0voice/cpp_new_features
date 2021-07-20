#include <thread>
#include <atomic>
#include <iostream>
#include <list>

using namespace std;

atomic_char16_t char16_tCount(0);

void threadfun1()
{
    for(int i =0; i< 1000; i++)
    {
        printf("char16_tCount:%d\r\n",  char16_tCount);
    }    
}
void threadfun2()
{
    for(int i =0; i< 1000; i++)
    {
        printf("char16_tCount:%d\r\n",  char16_tCount);
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

    int x = char16_tCount.load(memory_order_relaxed);
    printf("finally char16_tCount:%d\r\n",  x);
}



