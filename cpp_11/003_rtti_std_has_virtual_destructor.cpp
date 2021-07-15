#include <iostream>
#include <type_traits>
#include <string>
#include <stdexcept>
 
int main()
{
    std::cout << std::boolalpha
              << "std::string has a virtual destructor? "
              << std::has_virtual_destructor<std::string>::value << '\n'
              << "std::runtime_error has a virtual destructor? "
              << std::has_virtual_destructor<std::runtime_error>::value << '\n';
}
