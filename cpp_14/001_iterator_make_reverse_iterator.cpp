#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
 
int main() {
    std::vector<int> v{ 1, 3, 10, 8, 22 };
 
    std::sort(v.begin(), v.end());
    std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, ", "));
 
    std::cout << '\n';
 
    std::copy(
        std::make_reverse_iterator(v.end()), 
        std::make_reverse_iterator(v.begin()),
        std::ostream_iterator<int>(std::cout, ", "));
}
