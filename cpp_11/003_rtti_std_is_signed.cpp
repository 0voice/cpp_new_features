#include <iostream>
#include <type_traits>
 
class A {};
enum B : int {};
enum class C : int {};
 
int main() 
{
    std::cout << std::boolalpha;
    std::cout << std::is_signed<A>::value << '\n';
    std::cout << std::is_signed<float>::value << '\n';
    std::cout << std::is_signed<signed int>::value << '\n';
    std::cout << std::is_signed<unsigned int>::value << '\n';
    std::cout << std::is_signed<B>::value << '\n';
    std::cout << std::is_signed<C>::value << '\n';
 
    // 简短的形式:
    std::cout << std::is_signed<signed int>() << '\n';
    std::cout << std::is_signed<unsigned int>() << '\n';
}
