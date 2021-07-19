#include <iostream>
#include <unordered_set>
 
template<class Os, class Co> Os& operator<<(Os& os, const Co& co) {
    os << "{";
    for (auto const& i : co) { os << ' ' << i; }
    return os << " } ";
}
 
int main()
{
    std::unordered_multiset<int> a1{3, 1, 3, 2}, a2{5, 4, 5};
 
    auto it1 = std::next(a1.begin());
    auto it2 = std::next(a2.begin());
 
    const int& ref1 = *(a1.begin());
    const int& ref2 = *(a2.begin());
 
    std::cout << a1 << a2 << *it1 << ' ' << *it2 << ' ' << ref1 << ' ' << ref2 << '\n';
    a1.swap(a2);
    std::cout << a1 << a2 << *it1 << ' ' << *it2 << ' ' << ref1 << ' ' << ref2 << '\n';
 
    // 注意交换前指代一个容器中的元素的每个迭代器在交换后都指代同一元素。对于引用同为真。
}
