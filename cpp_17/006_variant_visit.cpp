#include <iomanip>
#include <iostream>
#include <string>
#include <type_traits>
#include <variant>
#include <vector>

template<class... Ts> struct overloaded : Ts... { using Ts::operator()...; };
template<class... Ts> overloaded(Ts...)->overloaded<Ts...>;

int main() {
    std::vector<std::variant<int,long,double,std::string>> vec = { 10, 15l, 1.5, "hello" };
    for (auto& v : vec) {
        std::visit(overloaded{
            [](auto arg) { std::cout << arg << ' '; },
            [](double arg) { std::cout << std::fixed << arg << ' '; },
            [](const std::string& arg) { std::cout << std::quoted(arg) << ' '; },
            }, v);
    }
}
