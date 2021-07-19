#include <iostream>
#include <string>
#include <string_view>
#include <functional>
#include <memory_resource>
using namespace std::literals;
 
int main()
{
    auto sv = "Stand back! I've got jimmies!"sv;
    std::string s(sv);
    std::pmr::string pmrs(sv); // use default allocator
 
    std::cout << std::hash<std::string_view>{}(sv) << '\n';
    std::cout << std::hash<std::string>{}(s) << '\n';
    std::cout << std::hash<std::pmr::string>{}(pmrs) << '\n';
}
