#include <iostream>
#include <type_traits>
 
struct A {
    int m;
};
 
struct B {
    int m1;
private:
    int m2;
};
 
struct C {
    virtual void foo();
};
 
int main()
{
    std::cout << std::boolalpha;
    std::cout << std::is_standard_layout<A>::value << '\n';
    std::cout << std::is_standard_layout<B>::value << '\n';
    std::cout << std::is_standard_layout<C>::value << '\n';
}
