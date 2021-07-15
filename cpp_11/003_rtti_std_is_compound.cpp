#include <iostream>
#include <type_traits>
 
int main() {
    class cls {};
    std::cout << (std::is_compound<cls>::value
                     ? "T is compound"
                     : "T is not a compound") << '\n';
    std::cout << (std::is_compound<int>::value
                     ? "T is compound"
                     : "T is not a compound") << '\n';
}
