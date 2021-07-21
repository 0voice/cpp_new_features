#include <type_traits>

int foo(int arg) {
    if (std::is_constant_evaluated()) {
        return 1;
    } else {
        return 0;
    }
}  

int main() {
    const auto b = foo(0);
    return b;
}
