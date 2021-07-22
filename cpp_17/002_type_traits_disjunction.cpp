#include <iostream>
#include <type_traits>
 
using result0 =
    std::disjunction<std::bool_constant<false>, std::bool_constant<false>,
                     std::bool_constant<false>>;
using result1 =
    std::disjunction<std::bool_constant<true>, std::bool_constant<false>,
                     std::bool_constant<false>>;
 
int main()
{
    std::cout << std::boolalpha;
    std::cout << result0::value << '\n';
    std::cout << result1::value << '\n';
}
