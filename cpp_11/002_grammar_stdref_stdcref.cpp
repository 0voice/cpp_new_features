//std::ref 用于包装按引用传递的值。 
//std::cref 用于包装按const引用传递的值。

#include<iostream>
#include<thread>
#include<string>

using namespace std;

void foo( int &a)
{
    cout<<"thread :"<< a++ <<endl;
}

int main()
{
    int num = 0;
    thread t1(foo, std::ref(num));
    thread t2(foo, std::ref(num));
    t1.join();
    t2.join();
    return 0;
}
