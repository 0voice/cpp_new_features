#include <thread>

thread_local int g_n = 1;

void f()
{
    g_n++;
    printf("id=%d, n=%d\n", std::this_thread::get_id(),g_n);
}

void foo()
{
    thread_local int i=0;
    printf("id=%d, n=%d\n", std::this_thread::get_id(), i);
    i++;
}

void f2()
{
    foo();
    foo();
}

int main()
{
    g_n++; 
    f();    
    std::thread t1(f);
    std::thread t2(f);

    t1.join();
    t2.join();


    f2();
    std::thread t4(f2);
    std::thread t5(f2);

    t4.join();
    t5.join();
    return 0;
}
