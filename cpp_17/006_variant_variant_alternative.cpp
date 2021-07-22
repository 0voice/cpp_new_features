#include <variant>
#include <iostream>
 
using my_variant = std::variant<int, float>;
static_assert(std::is_same_v
    <int,   std::variant_alternative_t<0, my_variant>>);
static_assert(std::is_same_v
    <float, std::variant_alternative_t<1, my_variant>>);
// cv-qualification on the variant type propagates to the extracted alternative type.
static_assert(std::is_same_v
    <const int, std::variant_alternative_t<0, const my_variant>>);
 
int main()
{
    std::cout << "All static assertions passed.\n";
}
