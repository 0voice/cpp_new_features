#include <iostream>
#include <unordered_set>
#include <vector>
 
using vb = std::vector<bool>;
 
vb to_vector_bool(unsigned n) {
    vb v;
    do {
        v.push_back(n & 1);
        n >>= 1;
    } while(n);
    return v;
}
 
auto print(const vb& v, bool new_line = true) {
    for (std::cout << "{ "; const bool e : v)
        std::cout << e << ' ';
    std::cout << '}' << (new_line ? '\n' : ' ');
}
 
int main()
{
    for (auto i{0U}; i != 8; ++i) {
        std::cout << std::hex << std::uppercase;
        vb v = to_vector_bool(i);
        std::cout << std::hash<vb>{}(v) << ' ' << std::dec;
        print(v);
    }
 
    // std::hash for vector<bool> makes it possible to keep them in
    // unordered_* associative containers, such as unordered_set.
 
    std::unordered_set v{ vb{0}, vb{0,0}, vb{1}, vb{1}, vb{1,0}, vb{1,1} };
 
    for (vb const& e : v) {
        print(e, 0);
    }
}
