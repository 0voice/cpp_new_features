#include <iostream>
#include <utility>
#include <type_traits>
struct Foo { int n; };
int main() {
    std::cout << std::boolalpha
              << "Foo is trivally copy-assignable? "
              << std::is_trivially_copy_assignable<Foo>::value << '\n'
              << "int[2] is copy-assignable? "
              << std::is_copy_assignable<int[2]>::value << '\n'
              << "int is nothrow copy-assignable? "
              << std::is_nothrow_copy_assignable<int>::value << '\n';
}
