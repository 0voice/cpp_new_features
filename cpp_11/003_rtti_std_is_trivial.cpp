#include <iostream>
#include <type_traits>
 
struct A {
    int m;
};
 
struct B {
    B() {}
};
 
int main() 
{
    std::cout << std::boolalpha;
    std::cout << std::is_trivial<A>::value << '\n';
    std::cout << std::is_trivial<B>::value << '\n';
}
