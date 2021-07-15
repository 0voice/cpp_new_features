#include <type_traits>
#include <new>
#include <utility>
 
// 于 p 所指向的未初始化内存构造 T
// 用聚合体的列表初始化，否则使用非列表初始化
template<class T, class... Args>
T* construct(T* p, Args&&... args) {
    if constexpr(std::is_aggregate_v<T>) {
        return ::new (static_cast<void*>(p)) T{std::forward<Args>(args)...};
    }
    else {
        return ::new (static_cast<void*>(p)) T(std::forward<Args>(args)...);
    }
}
 
struct A { int x, y; };
struct B { B(int, const char*) { } };
 
int main() {
    std::aligned_union_t<1, A, B> storage;
    A* a = construct(reinterpret_cast<A*>(&storage), 1, 2);
    B* b = construct(reinterpret_cast<B*>(&storage), 1, "hello");
}
