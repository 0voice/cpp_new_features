#include <iostream>
#include <stdexcept>
#include <string>
#include <variant>
 
struct Demon
{
    Demon(int) {}
    Demon(const Demon&) { throw std::domain_error("copy ctor"); }
    Demon& operator= (const Demon&) = default;
};
 
int main()
{
    std::variant<int, Demon> var{42};
    std::cout
        << std::boolalpha
        << "index == npos: " << (var.index() == std::variant_npos) << '\n';
 
    try { var = Demon{666}; } catch (const std::domain_error& ex)
    {
        std::cout
            << "Exception: " << ex.what() << '\n'
            << "index == npos: " << (var.index() == std::variant_npos) << '\n'
            << "valueless: " << var.valueless_by_exception() << '\n';
    }
}
