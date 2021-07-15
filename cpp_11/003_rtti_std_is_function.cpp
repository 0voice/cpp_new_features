#include <iostream>
#include <type_traits>
 
struct A {
    int fun() const&;
};
 
template<typename>
struct PM_traits {};
 
template<class T, class U>
struct PM_traits<U T::*> {
    using member_type = U;
};
 
int f();
 
int main() 
{
    std::cout << std::boolalpha;
    std::cout << std::is_function<A>::value << '\n';
    std::cout << std::is_function<int(int)>::value << '\n';
    std::cout << std::is_function<decltype(f)>::value << '\n';
    std::cout << std::is_function<int>::value << '\n';
 
    using T = PM_traits<decltype(&A::fun)>::member_type; // T 为 int() const&
    std::cout << std::is_function<T>::value << '\n';
}
