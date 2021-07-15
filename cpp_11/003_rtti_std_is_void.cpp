#include <iostream>
#include <type_traits>
 
int main() 
{
    std::cout << std::boolalpha;
    std::cout << std::is_void<void>::value << '\n';
    std::cout << std::is_void<int>::value << '\n';
}
