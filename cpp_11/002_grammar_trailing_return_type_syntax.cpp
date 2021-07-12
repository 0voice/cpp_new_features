#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <vector>
#include <map>

int func(int, int);
auto func2(int, int)->int; // 指定返回类型

template<typename T1, typename T2>
auto sum(const T1 &t1, const T2 &t2)->decltype(t1+t2) // 指定返回类型
{
    return t1 + t2;
}

template<typename T1, typename T2>
auto mul(const T1 &t1, const T2 &t2)->decltype(t1*t2) // 指定返回类型
{
    return t1 * t2;
}

void mytest()
{
    auto a = 3;
    auto b = 4L;
    auto pi = 3.14f;

    auto c = mul(sum(a, b), pi);
    std::cout << c << std::endl; // 21.98

    return;
}

int main()
{
    mytest();

    system("pause");
    return 0;
}
