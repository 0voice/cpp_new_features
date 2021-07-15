#include <iostream>
#include <type_traits>
 
struct A {};
 
struct B {
    int m;
};
 
struct C {
    static int m;
};
 
struct D {
    virtual ~D();
};
 
union E {};
 
struct F {
    [[no_unique_address]] E e;
};
 
struct G {
    int:0;  
    // C++ 标准允许“作为特殊情况，无名的长度为零的位域指定下个位域在分配单元边界对齐。
    // 仅当声明无名位域时宽度可为零。”
};
 
int main()
{
    std::cout << std::boolalpha;
    std::cout << "A " << std::is_empty<A>::value << '\n';
    std::cout << "B " << std::is_empty<B>::value << '\n';
    std::cout << "C " << std::is_empty<C>::value << '\n';
    std::cout << "D " << std::is_empty<D>::value << '\n';
    std::cout << "E " << std::is_empty<E>::value << '\n';
    std::cout << "F " << std::is_empty<F>::value << '\n'; // 结果依赖 ABI
    std::cout << "G " << std::is_empty<F>::value << '\n'; // 0 宽度的无名位域
}
