#include <iostream>
#include <type_traits>
 
struct Ex1 {
    std::string str; // member has a non-trivial copy ctor
};
struct Ex2 {
    int n;
    Ex2(const Ex2&) = default; // trivial and non-throwing
};
 
int main() {
    std::cout << std::boolalpha << "Ex1 is copy-constructible? "
              << std::is_copy_constructible<Ex1>::value << '\n'
              << "Ex1 is trivially copy-constructible? "
              << std::is_trivially_copy_constructible<Ex1>::value << '\n'
              << "Ex2 is trivially copy-constructible? "
              << std::is_trivially_copy_constructible<Ex2>::value << '\n'
              << "Ex2 is nothrow copy-constructible? "
              << std::is_nothrow_copy_constructible<Ex2>::value << '\n';
}
