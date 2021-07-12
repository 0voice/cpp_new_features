#include <cstddef>
#include <algorithm>
#include <iostream>
#include <numbers>
#include <string>
 
// used as conversion from degrees (input param) to radians (returned output)
constexpr long double operator"" _deg_to_rad ( long double deg )
{
    long double radians = deg * std::numbers::pi_v<long double> / 180;
    return radians;
}
 
// used with custom type
struct mytype
{
    unsigned long long m;
};
constexpr mytype operator"" _mytype ( unsigned long long n )
{
    return mytype{n};
}
 
// used for side-effects
void operator"" _print ( const char* str )
{
    std::cout << str << '\n';
}
 
#if __cpp_nontype_template_args < 201911
 
std::string operator"" _x2 ( const char* str, std::size_t )
{
    return std::string{str} + str;
}
 
#else // C++20 string literal operator template
 
template<std::size_t N>
struct DoubleString
{
    char p[N*2-1]{};
 
    constexpr DoubleString ( char const(&pp)[N] )
    {
        std::ranges::copy(pp, p);
        std::ranges::copy(pp, p + N - 1);
    };
};
 
template<DoubleString A>
constexpr auto operator"" _x2()
{
    return A.p;
}
 
#endif // C++20
 
int main()
{
    double x_rad = 90.0_deg_to_rad;
    std::cout << std::fixed << x_rad << '\n';
 
    mytype y = 123_mytype;
    std::cout << y.m << '\n';
 
    0x123ABC_print;
    std::cout << "abc"_x2 << '\n';
}
