#include <iostream>
#include <charconv>
#include <system_error>
#include <string_view>
#include <array>
 
int main()
{
    std::array<char, 10> str;
 
    if(auto [ptr, ec] = std::to_chars(str.data(), str.data() + str.size(), 42);
       ec == std::errc())
         std::cout << std::string_view
           (str.data(), ptr);              // C++20, uses string_view(first, last)
      //   (str.data(), ptr - str.data()); // C++17, uses string_view(ptr, length)
}
