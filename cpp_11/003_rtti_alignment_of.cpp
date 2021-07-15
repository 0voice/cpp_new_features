#include <iostream>
#include <type_traits>
 
class A {};
 
int main() 
{
    std::cout << std::alignment_of<A>::value << '\n';
    std::cout << std::alignment_of<int>() << '\n'; // 另一种语法
    std::cout << std::alignment_of_v<double> << '\n'; // c++17 另一种语法
}
