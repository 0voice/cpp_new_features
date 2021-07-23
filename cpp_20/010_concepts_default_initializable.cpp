#include <iostream>
#include <type_traits>
 
struct Ex1 {
    std::string str; // member has a non-trivial default ctor
};
struct Ex2 {
    int n;
    Ex2() = default; // trivial and non-throwing
};
 
int main() {
    std::cout << std::boolalpha << "Ex1 is default-constructible? "
              << std::is_default_constructible<Ex1>::value << '\n'
              << "Ex1 is trivially default-constructible? "
              << std::is_trivially_default_constructible<Ex1>::value << '\n'
              << "Ex2 is trivially default-constructible? "
              << std::is_trivially_default_constructible<Ex2>::value << '\n'
              << "Ex2 is nothrow default-constructible? "
              << std::is_nothrow_default_constructible<Ex2>::value << '\n';
}
