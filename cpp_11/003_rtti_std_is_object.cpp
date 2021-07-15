#include <iostream>
#include <type_traits>
 
int main() {
    class cls {};
    std::cout << std::boolalpha;
    std::cout << std::is_object<int>::value << '\n';
    std::cout << std::is_object<int&>::value << '\n';
    std::cout << std::is_object<cls>::value << '\n';
    std::cout << std::is_object<cls&>::value << '\n';
}
