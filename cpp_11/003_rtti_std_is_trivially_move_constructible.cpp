#include <iostream>
#include <type_traits>
 
struct Ex1 {
    std::string str; // 成员拥有非平凡而不抛出的移动构造函数
};
struct Ex2 {
    int n;
    Ex2(Ex2&&) = default; // 平凡且不抛出
};
struct NoMove {
    // 避免默认移动构造函数的隐式声明
    // 然而，该类仍为可移动构造因为复制构造函数能绑定到右值参数
    NoMove(const NoMove&) {}
};
 
int main() {
    std::cout << std::boolalpha << "Ex1 is move-constructible? "
              << std::is_move_constructible<Ex1>::value << '\n'
              << "Ex1 is trivially move-constructible? "
              << std::is_trivially_move_constructible<Ex1>::value << '\n'
              << "Ex1 is nothrow move-constructible? "
              << std::is_nothrow_move_constructible<Ex1>::value << '\n'
              << "Ex2 is trivially move-constructible? "
              << std::is_trivially_move_constructible<Ex2>::value << '\n'
              << "Ex2 is nothrow move-constructible? "
              << std::is_nothrow_move_constructible<Ex2>::value << '\n';
 
    std::cout << std::boolalpha
              << "NoMove is move-constructible? "
              << std::is_move_constructible<NoMove>::value << '\n'
              << "NoMove is nothrow move-constructible? "
              << std::is_nothrow_move_constructible<NoMove>::value << '\n';
}
