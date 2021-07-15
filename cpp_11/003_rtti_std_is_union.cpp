#include <iostream>
#include <type_traits>
 
struct A {};
 
typedef union {
    int a;
    float b;
} B;
 
struct C {
    B d;
};
 
int main() 
{
    std::cout << std::boolalpha;
    std::cout << std::is_union<A>::value << '\n';
    std::cout << std::is_union<B>::value << '\n';
    std::cout << std::is_union<C>::value << '\n';
    std::cout << std::is_union<int>::value << '\n';
}
