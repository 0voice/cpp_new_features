#include <map>
#include <iostream>
#include <string>
 
int main()
{
  std::map<int, std::string> ma {{1, "apple"}, {5, "pear"}, {10, "banana"}};
  std::map<int, std::string> mb {{2, "zorro"}, {4, "batman"}, {5, "X"}, {8, "alpaca"}};
  std::map<int, std::string> u;
  u.merge(ma);
  std::cout << "ma.size(): " << ma.size() << '\n';
  u.merge(mb);
  std::cout << "mb.size(): " << mb.size() << '\n';
  std::cout << "mb.at(5): " << mb.at(5) << '\n';
  for(auto const &kv: u)
    std::cout << kv.first << ", " << kv.second << '\n';
}
