#include <iostream>
#include <system_error>
#include <cerrno>
#include <string>
int main()
{
    std::error_condition econd = std::generic_category().default_error_condition(EDOM);
    std::cout << "Category: " << econd.category().name() << '\n'
              << "Value: " << econd.value() << '\n'
              << "Message: " << econd.message() << '\n';
}
