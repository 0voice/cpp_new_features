#include <assert.h>
#include <type_traits>				
#include <iostream>				

using namespace std;

struct A {
    double operator()(char, int&) {}
    float operator()(int) { return 1.0; }
};

int func(const int& x){	return x;}

struct CallObject {

    inline CallObject(const int& val) {}

    template<typename T>
    inline T operator()(const T& x)noexcept{return x;}
};

struct CObject {
    int data;

    inline CObject(const int& val) :data(val) {}
    inline int getData(const int& x)noexcept{return data+x;}
};

template<class T>
typename std::result_of<T(int)>::type f(T& t)
{
    std::cout << "overload of f for callable T\n";
    return t(0);
}

template<class T, class U>
int f(U u)
{
    std::cout << "overload of f for non-callable T\n";
    return u;
}

int main() {
    //普通函数：
    static_assert(is_same<int(const int&), decltype(func)>::value, ""); //注意func并没有转为指针
    static_assert(is_same<int(*)(const int&), decltype(&func)>::value, "");
    static_assert(is_same<int(&)(const int&), decltype(func)&>::value, "");

    static_assert((is_same<int(*)(const int&), //注意func转为指针
        invoke_result<decltype(&func)(const int&), const int&>::type>::value) == true);

    cout << typeid(invoke_result<decltype(func), const int&>::type).name() << endl; //int
    cout << typeid(invoke_result<decltype(func)&, const int&>::type).name() << endl;//int
    cout << typeid(invoke_result<decltype(&func), const int&>::type).name() << endl;//int
    cout << typeid(invoke_result<decltype(func)*, const int&>::type).name() << endl; //int

    cout << typeid(invoke_result<decltype(func)&(const int&), const int&>::type).name() << endl;//int __cdecl(int const & __ptr64)
    cout << typeid(invoke_result<decltype(func)*(const int&), const int&>::type).name() << endl; //int __cdecl(int const & __ptr64)

    cout << typeid(invoke_result<CallObject, const int&>::type).name() << endl;//int
    cout << typeid(invoke_result<CallObject, float>::type).name() << endl;//float

    //decltype(declval<CObject>().getData(declval<const int&>()));//错误？不明白请高手补充

    cout << is_same<int, decltype(declval<CObject>().data)>::value << endl;
    cout << typeid(invoke_result<decltype(&CObject::getData), CObject, const int&>::type).name() << endl;//int

    //用char和int&参数调用A的结果是double 	
    std::result_of<A(char, int&)>::type x1 = 3.14; // double x1;			
    static_assert(std::is_same<decltype(x1), double>::value, "");

    // std :: invoke_result使用不同的语法（不带括号） 	
    std::invoke_result<A, char, int&>::type x2 = 3.14;// double x1;
    static_assert(std::is_same<decltype(x2), double>::value, "");

    //用int参数调用A的结果是float 	
    std::result_of<A(int)>::type x3 = float(3.14); // float	x3;			
    static_assert(std::is_same<decltype(x3), float>::value, "");

    std::invoke_result<A, int>::type x31 = float(3.14);// float x1;
    static_assert(std::is_same<decltype(x31), float>::value, "");

    // result_of可以与指向成员函数的指针一起使用，如下所示：	
    struct B { double Func(char, int&); };
    std::result_of<decltype(&B::Func)(B, char, int&)>::type x4 = 3.14;
    static_assert(std::is_same<decltype(x4), double>::value, "");

    cout << typeid(invoke_result<decltype(&B::Func), B, char, int&>::type).name() << endl;//double

    // B++11错误; calls the non-callable overload in B++14	
    f<B>(1);// 输出overload of f for non-callable T			
}
