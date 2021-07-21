#include <iostream>
#include <type_traits>
 
class A {};
 
int main() 
{
    std::cout << std::boolalpha;
    std::cout << std::is_unbounded_array_v<A> << '\n';
    std::cout << std::is_unbounded_array_v<A[]> << '\n';
    std::cout << std::is_unbounded_array_v<A[3]> << '\n';
    std::cout << std::is_unbounded_array_v<float> << '\n';
    std::cout << std::is_unbounded_array_v<int> << '\n';
    std::cout << std::is_unbounded_array_v<int[]> << '\n';
    std::cout << std::is_unbounded_array_v<int[3]> << '\n';
}
