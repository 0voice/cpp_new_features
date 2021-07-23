#include <format>
#include <iostream>
#include <vector>
#include <string_view>
 
int main()
{
    using namespace std::literals::string_view_literals;
 
    constexpr auto fmt_str { "Hubble's H{0} {1} {2:*^4} miles/sec/mpc."sv };
    constexpr auto sub_zero { "₀"sv };  // { "\u2080"sv } => { 0xe2, 0x82, 0x80 };
    constexpr auto aprox_equ { "≅"sv }; // { "\u2245"sv } => { 0xe2, 0x89, 0x85 };
    constexpr int Ho { 42 }; // H₀
 
 
    const auto min_buffer_size = std::formatted_size(fmt_str, sub_zero, aprox_equ, Ho);
 
    std::cout << "Min buffer size = " << min_buffer_size << '\n';
 
    // Use std::vector as dynamic buffer. Note: buffer does not include the trailing '\0'.
    std::vector<char> buffer(min_buffer_size); 
 
    std::format_to_n(buffer.data(), buffer.size(), fmt_str, sub_zero, aprox_equ, Ho);
 
    std::cout << "Buffer: \"" << std::string_view{buffer.data(), min_buffer_size} << "\"\n";
 
    // Or we can print the buffer directly by adding the trailing '\0'.
    buffer.push_back('\0');
    std::cout << "Buffer: \"" << buffer.data() << "\"\n";
}
