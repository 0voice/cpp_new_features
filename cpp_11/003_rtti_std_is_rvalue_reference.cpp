#include <iostream>
#include <type_traits>
 
class A {};
 
int main() 
{
    std::cout << std::boolalpha;
    std::cout << std::is_rvalue_reference<A>::value << '\n';
    std::cout << std::is_rvalue_reference<A&>::value << '\n';
    std::cout << std::is_rvalue_reference<A&&>::value << '\n';
    std::cout << std::is_rvalue_reference<int>::value << '\n';
    std::cout << std::is_rvalue_reference<int&>::value << '\n';
    std::cout << std::is_rvalue_reference<int&&>::value << '\n';
}
