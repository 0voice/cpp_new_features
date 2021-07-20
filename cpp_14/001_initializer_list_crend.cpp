#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
 
int main()
{
    int a[] = {4, 6, -3, 9, 10};
    std::cout << "Array backwards: ";
    std::copy(std::rbegin(a), std::rend(a), std::ostream_iterator<int>(std::cout, " "));
 
    std::cout << "\nVector backwards: ";
    std::vector<int> v = {4, 6, -3, 9, 10};
    std::copy(std::rbegin(v), std::crend(v), std::ostream_iterator<int>(std::cout, " "));
}
