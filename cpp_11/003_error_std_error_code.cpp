#include <thread>
#include <iostream>
#include <system_error>
 
int main()
{
    try {
        std::thread().detach(); // attempt to detach a non-thread
    } catch(const std::system_error& e) {
        std::cout << "Caught system_error with code " << e.code() 
                  << " meaning " << e.what() << '\n';
    }
}
