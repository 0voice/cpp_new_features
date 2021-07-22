#include <iostream>
#include <utility>
#include <string>
 
#include <map>
int main()
{
    using namespace std::literals;
    std::map<std::string, std::string> m;
 
    m.try_emplace("a", "a"s);
    m.try_emplace("b", "abcd");
    m.try_emplace("c", 10, 'c');
    m.try_emplace("c", "Won't be inserted");
 
    for (const auto &p : m) {
        std::cout << p.first << " => " << p.second << '\n';
    }
}
