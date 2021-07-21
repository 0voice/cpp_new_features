#include <type_traits>
#include <iostream>
 
struct Foo {
    int x;
    char y;
};
 
class Bar {
    const int u = 42;
    volatile char v = '*';
};
 
enum E0 : int {};
enum class E1 : int {};
 
int main()
{
    std::cout << std::boolalpha
        << std::is_layout_compatible_v<const void, volatile void> << '\n'
        << std::is_layout_compatible_v<Foo, Bar> << '\n'
        << std::is_layout_compatible_v<Foo[2], Bar[2]> << '\n'
        << std::is_layout_compatible_v<int, E0> << '\n'
        << std::is_layout_compatible_v<E0, E1> << '\n'
        << std::is_layout_compatible_v<long, unsigned long> << '\n'
        << std::is_layout_compatible_v<char*, const char*> << '\n'
        << std::is_layout_compatible_v<char*, char* const> << '\n';
}
