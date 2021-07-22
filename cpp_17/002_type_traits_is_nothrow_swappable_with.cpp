#include <type_traits>
#include <iostream>

struct A
{
    A(const A&);
};

struct B
{
};

void swap(B&, B&);

struct C
{
};

void swap(C&, C&) noexcept;

struct D
{
    D(const D&) noexcept;
    D& operator=(const D&) noexcept;
};

int main()
{
    std::cout << "std::__is_nothrow_swappable<int>::value = "
              << std::__is_nothrow_swappable<int>::value << '\n';
    std::cout << "std::__is_nothrow_swappable<A>::value = "
              << std::__is_nothrow_swappable<A>::value << '\n';
    std::cout << "std::__is_nothrow_swappable<B>::value = "
              << std::__is_nothrow_swappable<B>::value << '\n';
    std::cout << "std::__is_nothrow_swappable<C>::value = "
              << std::__is_nothrow_swappable<C>::value << '\n';
    std::cout << "std::__is_nothrow_swappable<D>::value = "
              << std::__is_nothrow_swappable<D>::value << '\n';
}
