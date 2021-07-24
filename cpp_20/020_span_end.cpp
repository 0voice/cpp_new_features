#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
 
int main() 
{
    std::vector<int> v = { 3, 1, 4 };
    if (std::find(std::begin(v), std::end(v), 5) != std::end(v)) {
        std::cout << "found a 5 in vector v!\n";
    }
 
    int a[] = { 5, 10, 15 };
    if (std::find(std::begin(a), std::end(a), 5) != std::end(a)) {
        std::cout << "found a 5 in array a!\n";
    }
}
