#include <iostream>
#include <type_traits>
 
// 若所有 Ts... 都拥有等同于 T 的类型，则启用 func
template<typename T, typename... Ts>
std::enable_if_t<std::conjunction_v<std::is_same<T, Ts>...>>
func(T, Ts...) {
    std::cout << "all types in pack are T\n";
}
 
// 否则
template<typename T, typename... Ts>
std::enable_if_t<!std::conjunction_v<std::is_same<T, Ts>...>>
func(T, Ts...) {
    std::cout << "not all types in pack are T\n";
}
 
int main() {
    func(1, 2, 3);
    func(1, 2, "hello!");
}
