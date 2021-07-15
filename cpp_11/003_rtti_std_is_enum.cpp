#include <iostream>
#include <type_traits>
 
class A {};
 
enum E {};
 
enum class Ec : int {};
 
int main() 
{
    std::cout << std::boolalpha;
    std::cout << std::is_enum<A>::value << '\n';
    std::cout << std::is_enum<E>::value << '\n';
    std::cout << std::is_enum<Ec>::value << '\n';
    std::cout << std::is_enum<int>::value << '\n';
}
