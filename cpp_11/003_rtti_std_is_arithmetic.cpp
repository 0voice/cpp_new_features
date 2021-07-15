#include <iostream>
#include <type_traits>
 
class A {};
 
int main() 
{
    std::cout << std::boolalpha;
    std::cout << "A:           " <<  std::is_arithmetic<A>::value << '\n';
    std::cout << "bool:        " <<  std::is_arithmetic<bool>::value << '\n';
    std::cout << "int:         " <<  std::is_arithmetic<int>::value << '\n';
    std::cout << "int const:   " <<  std::is_arithmetic<int const>::value << '\n';
    std::cout << "int &:       " <<  std::is_arithmetic<int&>::value << '\n';
    std::cout << "int *:       " <<  std::is_arithmetic<int*>::value << '\n';
    std::cout << "float:       " <<  std::is_arithmetic<float>::value << '\n';
    std::cout << "float const: " <<  std::is_arithmetic<float const>::value << '\n';
    std::cout << "float &:     " <<  std::is_arithmetic<float&>::value << '\n';
    std::cout << "float *:     " <<  std::is_arithmetic<float*>::value << '\n';
    std::cout << "char:        " <<  std::is_arithmetic<char>::value << '\n';
    std::cout << "char const:  " <<  std::is_arithmetic<char const>::value << '\n';
    std::cout << "char &:      " <<  std::is_arithmetic<char&>::value << '\n';
    std::cout << "char *:      " <<  std::is_arithmetic<char*>::value << '\n';
}
