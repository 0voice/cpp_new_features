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
    std::cout << std::is_pod<A>::value << '\n';
    std::cout << std::is_pod<B>::value << '\n';
    std::cout << std::is_pod<C>::value << '\n';
}
