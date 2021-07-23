#include <cstdint>
#include <iomanip>
#include <iostream>
#include <type_traits>
#include <utility>
 
int main()
{
    enum class E1 : char { e };
    static_assert(std::is_same_v<char, decltype(std::to_underlying(E1::e))>);
    enum struct E2 : long { e };
    static_assert(std::is_same_v<long, decltype(std::to_underlying(E2::e))>);
    enum E3 : unsigned { e };
    static_assert(std::is_same_v<unsigned, decltype(std::to_underlying(e))>);
 
    enum class ColorMask : std::uint32_t {
        red = 0xFF, green = (red << 8), blue = (green << 8), alpha = (blue << 8)
    };
    std::cout << std::hex << std::uppercase << std::setfill('0')
        << std::setw(8) << std::to_underlying(ColorMask::red) << '\n'
        << std::setw(8) << std::to_underlying(ColorMask::green) << '\n'
        << std::setw(8) << std::to_underlying(ColorMask::blue) << '\n'
        << std::setw(8) << std::to_underlying(ColorMask::alpha) << '\n';
 
//  std::underlying_type_t<ColorMask> x = ColorMask::alpha; // Error: no known conversion
    [[maybe_unused]]
    std::underlying_type_t<ColorMask> y = std::to_underlying(ColorMask::alpha); // OK
}
