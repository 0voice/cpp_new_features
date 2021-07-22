// clang++ -std=c++17 -Wall -pedantic main.cpp
#include<map>
#include<string>
#include<algorithm>

int main() {
  std::map<int, std::string> m{ {10, "potato"}, {1, "banana"} };
  auto nodeHandler = m.extract(10);
  nodeHandler.key() = 2;
  m.insert(std::move(nodeHandler)); // { { 1, "banana" }, { 2, "potato" } }
}
