#include <string>
#include <iostream>
#include <any>
#include <utility>
 
int main()
{
    // simple example 
 
    auto a = std::any(12);
 
    std::cout << std::any_cast<int>(a) << '\n'; 
 
    try {
        std::cout << std::any_cast<std::string>(a) << '\n';
    }
    catch(const std::bad_any_cast& e) {
        std::cout << e.what() << '\n';
    }
 
    // pointer example
 
    if (int* i = std::any_cast<int>(&a)) {
       std::cout << "a is int: " << *i << '\n';
    } else if (std::string* s = std::any_cast<std::string>(&a)) {
       std::cout << "a is std::string: " << *s << '\n';
    } else {
       std::cout << "a is another type or unset\n";
    }
 
    // advanced example
 
    a = std::string("hello");
 
    auto& ra = std::any_cast<std::string&>(a); //< reference
    ra[1] = 'o';
 
    std::cout << "a: "
        << std::any_cast<const std::string&>(a) << '\n'; //< const reference
 
    auto b = std::any_cast<std::string&&>(std::move(a)); //< rvalue reference
 
    // Note: 'b' is a move-constructed std::string,
    // 'a' is left in valid but unspecified state
 
    std::cout << "a: " << *std::any_cast<std::string>(&a) //< pointer
        << "b: " << b << '\n';
}
