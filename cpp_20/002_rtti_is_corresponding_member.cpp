#include <type_traits>
#include <iostream>
 
struct Foo { int x; };
struct Bar { int y; double z; };
 
struct Baz : Foo, Bar {}; // not standard-layout
 
int main()
{
    std::cout << std::boolalpha
        << std::is_same_v<decltype(&Baz::x), int Foo::*> << '\n'
        << std::is_same_v<decltype(&Baz::y), int Bar::*> << '\n'
        << std::is_corresponding_member(&Foo::x, &Bar::y) << '\n'
        << std::is_corresponding_member(&Baz::x, &Baz::y) << '\n'
        << std::is_corresponding_member<Baz, Baz>(&Baz::x, &Baz::y) << '\n';
}
