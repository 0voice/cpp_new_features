#include <format>
#include <iostream>
	 
// 类型 T 的包装
template<class T>
struct Box {
    T value;
};
 
// 能用被包装值的格式说明格式化包装 Box<T>
template<class T, class CharT>
struct std::formatter<Box<T>, CharT> : std::formatter<T, CharT> {
    // 从基类继承 parse()
 
    // 通过以被包装值调用基类实现定义 format()
    template<class FormatContext>
    auto format(Box<T> t, FormatContext& fc) {
        return std::formatter<T, CharT>::format(t.value, fc);
    }
};
 
int main() {
    Box<int> v = { 42 };
    std::cout << std::format("{:#x}", v);
}
