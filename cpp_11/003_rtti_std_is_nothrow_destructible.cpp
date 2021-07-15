#include <iostream>
#include <string>
#include <type_traits>
struct Foo {
   std::string str;
   ~Foo() noexcept {};
};
struct Bar {
    ~Bar() = default;
};
int main() {
    std::cout << std::boolalpha
              << "std::string is destructible? "
              << std::is_destructible<std::string>::value << '\n'
              << "Foo is nothrow destructible? "
              << std::is_nothrow_destructible<Foo>::value << '\n'
              << "Bar is trivally destructible? "
              << std::is_trivially_destructible<Bar>::value << '\n';
}
