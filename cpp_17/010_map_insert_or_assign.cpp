#include <iostream>
#include <map>
#include <string>
 
auto print_node = [](const auto &node) {
    std::cout << "[" << node.first << "] = " << node.second << '\n';
};
 
auto print_result = [](auto const &pair) {
    std::cout << (pair.second ? "inserted: " : "assigned: ");
    print_node(*pair.first);
};
 
int main()
{
    std::map<std::string, std::string> myMap;
 
    print_result( myMap.insert_or_assign("a", "apple"     ) );
    print_result( myMap.insert_or_assign("b", "banana"    ) );
    print_result( myMap.insert_or_assign("c", "cherry"    ) );
    print_result( myMap.insert_or_assign("c", "clementine") );
 
    for (const auto &node : myMap) { print_node(node); }
}
