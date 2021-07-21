#include <iostream>
#include <compare>
 
struct Rational_2 {
    int num;
    int den; // > 0
};
 
constexpr std::weak_ordering operator<=>(Rational_2 lhs, Rational_2 rhs)
{
    return lhs.num * rhs.den <=> rhs.num * lhs.den;
}
 
void print(std::weak_ordering value)
{
    if (value == 0)
        std::cout << "equal\n";
    else if (value < 0)
        std::cout << "less\n";
    else
        std::cout << "greater\n";
}
 
int main()
{
    Rational_2 c{6,5};
    Rational_2 d{8,7};
    print(c <=> d);
    print(std::compare_three_way{}(c,d));
}
