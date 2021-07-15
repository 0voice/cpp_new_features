#include <iostream>
#include <type_traits>
 
int main()
{
    std::cout << std::rank<int[1][2][3]>::value << '\n';
    std::cout << std::rank<int[][2][3][4]>::value << '\n';
    std::cout << std::rank<int>::value << '\n';
}
