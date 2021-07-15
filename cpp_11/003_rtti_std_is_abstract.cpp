#include <iostream>
#include <type_traits>
 
struct A {
    int m;
};
 
struct B {
    virtual void foo();
};
 
struct C {
    virtual void foo() = 0;
};
 
struct D : C {};
 
int main()
{
    std::cout << std::boolalpha;
    std::cout << std::is_abstract<A>::value << '\n';
    std::cout << std::is_abstract<B>::value << '\n';
    std::cout << std::is_abstract<C>::value << '\n';
    std::cout << std::is_abstract<D>::value << '\n';
}
