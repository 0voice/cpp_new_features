#include <iostream>
#include <system_error>
#include <thread>

int main()
{
    try {
        std::thread().detach(); // detaching a not-a-thread
    } catch (const std::system_error& e) {
        std::cout << "Caught a system_error\n";
        if(e.code() == std::errc::invalid_argument)
            std::cout << "The error condition is std::errc::invalid_argument\n";
        std::cout << "the error description is " << e.what() << '\n';
    }
}
