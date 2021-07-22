#include <array>
#include <charconv>
#include <iostream>
#include <string_view>
 
int main()
{
    std::array<char, 10> str{"42 xyz "};
    int result;
    if(auto [p, ec] = std::from_chars(str.data(), str.data()+str.size(), result);
       ec == std::errc())
        std::cout << result << "\n" "p -> \"" << p << "\"\n";
 
    std::string_view sv{"24 abc "};
    if(auto [p, ec] = std::from_chars(data(sv), data(sv)+size(sv), result);
       ec == std::errc())
        std::cout << result << "\n" "p -> \"" << p << "\"\n";
}
