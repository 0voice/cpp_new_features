#include <type_traits>
#include <iostream>
#include <string>
 
namespace detail { struct inplace_t{}; }
void* operator new(std::size_t, void* p, detail::inplace_t) {
    return p;
}
 
// enabled via the return type
template<class T,class... Args>
typename std::enable_if<std::is_trivially_constructible<T,Args&&...>::value>::type 
    construct(T* t,Args&&... args) 
{
    std::cout << "constructing trivially constructible T\n";
}
 
// enabled via a parameter
template<class T>
void destroy(T* t, 
             typename std::enable_if<std::is_trivially_destructible<T>::value>::type* = 0) 
{
    std::cout << "destroying trivially destructible T\n";
}
 
// enabled via a template parameter
template<class T,
         typename std::enable_if<
             !std::is_trivially_destructible<T>{} &&
             (std::is_class<T>{} || std::is_union<T>{}),
            int>::type = 0>
void destroy(T* t)
{
    std::cout << "destroying non-trivially destructible T\n";
    t->~T();
}
int main()
{
    std::aligned_union_t<0,int,std::string> u;
 
    construct(reinterpret_cast<int*>(&u));
    destroy(reinterpret_cast<int*>(&u));
 
    construct(reinterpret_cast<std::string*>(&u),"Hello");
    destroy(reinterpret_cast<std::string*>(&u));
}
