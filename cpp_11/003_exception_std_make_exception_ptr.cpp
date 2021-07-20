// make_exception_ptr example
#include <iostream>       // std::cout
#include <exception>      // std::make_exception_ptr, std::rethrow_exception
#include <stdexcept>      // std::logic_error

int main () {
  auto p = std::make_exception_ptr(std::logic_error("logic_error"));

  try {
     std::rethrow_exception (p);
  } catch (const std::exception& e) {
     std::cout << "exception caught: " << e.what() << '\n';
  }
  return 0;
}
