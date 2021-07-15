#include <iostream>
#include <type_traits>
 
class E { public: template<class T> E(T&&) { } };
 
int main() 
{
    class A {};
    class B : public A {};
    class C {};
    class D { public: operator C() { return c; }  C c; };
 
 
    bool b2a = std::is_convertible<B*, A*>::value;
    bool a2b = std::is_convertible<A*, B*>::value;
    bool b2c = std::is_convertible<B*, C*>::value;
    bool d2c = std::is_convertible<D, C>::value;
 
    // 完美转发构造函数使类能从任何类型转换
 
    bool everything2e = std::is_convertible<A, E>::value; //< B, C, D 等
 
    std::cout << std::boolalpha;
 
    std::cout << b2a << '\n';
    std::cout << a2b << '\n';
    std::cout << b2c << '\n';
    std::cout << d2c << '\n';
    std::cout << '\n';
    std::cout << everything2e << '\n';
}
