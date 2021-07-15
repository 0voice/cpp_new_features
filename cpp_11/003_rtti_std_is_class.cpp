#include <iostream>
#include <type_traits>
 
struct A {};
 
class B {};
 
enum class C {};
 
int main() 
{
    std::cout << std::boolalpha;
    std::cout << std::is_class<A>::value << '\n';
    std::cout << std::is_class<B>::value << '\n';
    std::cout << std::is_class<C>::value << '\n';
    std::cout << std::is_class<int>::value << '\n';
}
