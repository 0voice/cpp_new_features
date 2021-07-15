#include <iostream>
#include <type_traits>
 
struct A {
    int m;
};
 
struct B {
    B(const B&) {}
};
 
struct C {
    virtual void foo();
};
 
int main()
{
    std::cout << std::boolalpha;
    std::cout << std::is_trivially_copyable<A>::value << '\n';
    std::cout << std::is_trivially_copyable<B>::value << '\n';
    std::cout << std::is_trivially_copyable<C>::value << '\n';
}
