// alignment_of example
#include <iostream>
#include <type_traits>

int main() {
  std::cout << "alignment_of:" << std::endl;
  std::cout << "char: " << std::alignment_of<char>::value << std::endl;
  std::cout << "int: " << std::alignment_of<int>::value << std::endl;
  std::cout << "int[20]: " << std::alignment_of<int[20]>::value << std::endl;
  std::cout << "long long int: " << std::alignment_of<long long int>::value << std::endl;
  return 0;
}
