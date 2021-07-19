#include <iostream>
using namespace std;

struct A
{
    A(int i = 10) : m_a(i)
    {}

    int m_a;
};

struct B : A
{
    using A::A;  // 继承构造函数

    int m_b{ 100 };
};

int main()
{
    B b;
    cout << b.m_a << endl; // 10
    cout << b.m_b << endl; // 100

    B bb(200);
    cout << bb.m_a << endl; // 200
    cout << bb.m_b << endl; // 100
}
