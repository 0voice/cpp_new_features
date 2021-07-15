#include <iostream>
#include <type_traits>
 
struct Ex1 {
    std::string str; // 成员拥有非平凡默认构造函数
};
struct Ex2 {
    int n;
    Ex2() = default; // 平凡且不抛出
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
