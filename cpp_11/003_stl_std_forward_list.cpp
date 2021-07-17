#include <forward_list>
#include <iostream>
 
int main()
{
    std::forward_list<int> numbers;
    std::cout << "Initially, numbers.empty(): " << numbers.empty() << '\n';
 
    numbers.push_front(42);
    numbers.push_front(13317); 
    std::cout << "After adding elements, numbers.empty(): " << numbers.empty() << '\n';
}
