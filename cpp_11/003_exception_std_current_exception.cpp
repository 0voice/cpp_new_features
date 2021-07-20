#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>
 
void handle_eptr(std::exception_ptr eptr) // 按值传递 ok
{
    try {
        if (eptr) {
            std::rethrow_exception(eptr);
        }
    } catch(const std::exception& e) {
        std::cout << "Caught exception \"" << e.what() << "\"\n";
    }
}
 
int main()
{
    std::exception_ptr eptr;
    try {
        std::string().at(1); // 这生成一个 std::out_of_range
    } catch(...) {
        eptr = std::current_exception(); // 捕获
    }
    handle_eptr(eptr);
} // std::out_of_range 的析构函数调用于此，在 ept 析构时
