#include <iostream>
#include <string>
#include <type_traits>
struct Ex1 { int n; };
int main() {
    std::cout << std::boolalpha
              << "int is assignable from int? "
              << std::is_assignable<int, int>::value << '\n' // 1 = 1; wouldn't compile
              << "int& is assignable from int? "
              << std::is_assignable<int&, int>::value << '\n' // int a; a = 1; works
              << "int is assignable from double? "
              << std::is_assignable<int, double>::value << '\n'
              << "int& is nothrow assignable from double? "
              << std::is_nothrow_assignable<int&, double>::value << '\n'
              << "string is assignable from double? "
              << std::is_assignable<std::string, double>::value << '\n'
              << "Ex1& is trivially assignable from const Ex1&? "
              << std::is_trivially_assignable<Ex1&, const Ex1&>::value << '\n';
}
