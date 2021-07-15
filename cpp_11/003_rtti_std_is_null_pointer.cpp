#include <iostream>
#include <type_traits>
 
int main()
{
    std::cout << std::boolalpha
              << std::is_null_pointer< decltype(nullptr) >::value << ' '
              << std::is_null_pointer< int* >::value << '\n'
              << std::is_pointer< decltype(nullptr) >::value << ' '
              << std::is_pointer<int*>::value << '\n';
}
