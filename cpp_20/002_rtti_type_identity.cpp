#include <iostream>
#include <type_traits>
 
template <class T>
T foo(T a, T b) {
  return a + b;
}
 
template <class T>
T bar(T a, std::type_identity_t<T> b) {
  return a + b;
}
 
int main() {
  // foo(4.2, 1); // error, deduced conflicting types for 'T'
  std::cout << bar(4.2, 1) << '\n';  // OK, calls bar<double>
}
