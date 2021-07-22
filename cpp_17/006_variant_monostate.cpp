#include <variant>
#include <iostream>
#include <cassert>
 
struct S
{
    S(int i) : i(i) {}
    int i;
};
 
int main() {
 
    // Without the monostate type this declaration will fail.
    // This is because S is not default-constructible.
 
    std::variant<std::monostate, S> var; 
    assert(var.index() == 0);
 
    try {
        std::get<S>(var); // throws! We need to assign a value
    }
    catch(const std::bad_variant_access& e) {
        std::cout << e.what() << '\n';
    }
 
    var = 12; 
 
    std::cout << std::get<S>(var).i << '\n';
}
