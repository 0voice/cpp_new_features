#include <thread>
#include <atomic>
#include <iostream>
#include <list>

using namespace std;

atomic_wchar_t wchar_tCount(0);

void threadfun1()
{
    for(int i =0; i< 1000; i++)
    {
        printf("wchar_tCount:%d\r\n",  wchar_tCount);
    }    
}
void threadfun2()
{
    for(int i =0; i< 1000; i++)
    {
        printf("wchar_tCount:%d\r\n",  wchar_tCount);
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

    int x = wchar_tCount.load(memory_order_relaxed);
    printf("finally wchar_tCount:%d\r\n",  x);
}




