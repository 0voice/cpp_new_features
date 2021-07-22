#include <iostream>
#include <typeinfo>
 
struct Foo { virtual ~Foo() {} };
struct Bar { virtual ~Bar() {} };
 
int main()
{
    Bar b;
    try {
        Foo& f = dynamic_cast<Foo&>(b);
    } catch(const std::bad_cast& e)
    {
        std::cout << e.what() << '\n';
    }
}
