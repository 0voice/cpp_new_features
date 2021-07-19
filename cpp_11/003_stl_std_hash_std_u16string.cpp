#include <iostream>
#include <string_view>
#include <unordered_set>
using namespace std::literals;
 
int main() {
    std::cout << "\"A\"   #: " << std::hash<std::string_view>{}("A"sv) << '\n';
    std::cout << "L\"B\"  #: " << std::hash<std::wstring_view>{}(L"B"sv) << '\n';
    std::cout << "u8\"C\" #: " << std::hash<std::u8string_view>{}(u8"C"sv) << '\n';
    std::cout << "u\"D\"  #: " << std::hash<std::u16string_view>{}(u"D"sv) << '\n';
    std::cout << "U\"E\"  #: " << std::hash<std::u32string_view>{}(U"E"sv) << '\n';
 
    // std::hash for string_view family makes it possible to keep these view-types
    // in unordered_* associative containers, such as unordered_set. But ensure
    // the lifespan of referenced strings is no less than lifespan of the container,
    // i.e. no dangling references occurred.
 
    std::unordered_set stars{"Rigel"sv, "Capella"sv, "Vega"sv, "Arcturus"sv};
 
    for (std::string_view const& s : stars) {
        std::cout << s << ' ';
    }
    std::cout << '\n';
}
