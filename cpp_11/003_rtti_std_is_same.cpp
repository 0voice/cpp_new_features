#include <iostream>
#include <type_traits>
#include <cstdint>
 
void print_separator()
{
    std::cout << "-----\n";
}
 
int main()
{
    std::cout << std::boolalpha;
 
    // 一些实现定义状况
    std::cout << std::is_same<int, std::int32_t>::value << '\n';
    // 若 'int' 为 32 位则通常为 true
    std::cout << std::is_same<int, std::int64_t>::value << '\n';
    // 若使用 ILP64 数据模型则可能为 true
 
    print_separator();
 
    // 'float' 决非整数类型
    std::cout << std::is_same<float, std::int32_t>::value << '\n'; // false
 
    print_separator();
 
    // 'int' 为隐式的 'signed'
    std::cout << std::is_same<int, int>::value << "\n";          // true
    std::cout << std::is_same<int, unsigned int>::value << "\n"; // false
    std::cout << std::is_same<int, signed int>::value << "\n";   // true
 
    print_separator();
 
    // 不同于其他类型， 'char' 既非 'unsigned' 亦非 'signed'
    std::cout << std::is_same<char, char>::value << "\n";          // true
    std::cout << std::is_same<char, unsigned char>::value << "\n"; // false
    std::cout << std::is_same<char, signed char>::value << "\n";   // false
}
