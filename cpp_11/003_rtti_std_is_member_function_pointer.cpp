#include <type_traits>
 
class A {
public:
    void member() { }
};
 
int main()
{
    // 若 A::member 是数据成员而非函数，则在编译时失败
    static_assert(std::is_member_function_pointer<decltype(&A::member)>::value,
                  "A::member is not a member function."); 
}
