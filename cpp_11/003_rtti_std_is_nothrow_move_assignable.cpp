#include <iostream>
#include <string>
#include <type_traits>
struct Foo { int n; };
struct NoMove {
    // 避免默认的移动赋值运算符的隐式定义
    // 然而，该类仍然可移动赋值，因为
    // 其复制赋值运算符能绑定到右值参数
    NoMove& operator=(const NoMove&) { return *this; }
};
int main() {
    std::cout << std::boolalpha
              << "std::string is nothrow move-assignable? "
              << std::is_nothrow_move_assignable<std::string>::value << '\n'
              << "int[2] is move-assignable? "
              << std::is_move_assignable<int[2]>::value << '\n'
              << "Foo is trivally move-assignable? "
              << std::is_trivially_move_assignable<Foo>::value << '\n';
 
    std::cout << std::boolalpha
              << "NoMove is move-assignable? "
              << std::is_move_assignable<NoMove>::value << '\n'
              << "NoMove is nothrow move-assignable? "
              << std::is_nothrow_move_assignable<NoMove>::value << '\n';
}
