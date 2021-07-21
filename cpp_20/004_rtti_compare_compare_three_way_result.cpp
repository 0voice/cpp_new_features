#include <compare>
#include <type_traits>
#include <iostream>
 
template <class Ord>
void print_cmp_type()
{
    if constexpr (std::is_same_v<Ord, std::strong_ordering>)
        std::cout << "strong ordering\n";
    else if constexpr (std::is_same_v<Ord, std::weak_ordering>)
        std::cout << "weak ordering\n";
    else if constexpr (std::is_same_v<Ord, std::partial_ordering>)
        std::cout << "partial ordering\n";
    else
        std::cout << "illegal comparison result type\n";
}
 
int main()
{
    print_cmp_type<std::compare_three_way_result_t<int>>();
    print_cmp_type<std::compare_three_way_result_t<double>>();
}
