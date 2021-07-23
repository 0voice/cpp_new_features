#include <iostream>
#include <concepts>
template<typename T>
concept gcdint = std::unsigned_integral<T> && !std::is_same_v<std::remove_cv_t<T>, bool>;

template<gcdint T1, gcdint T2>
constexpr std::common_type_t<T1, T2> gcd(T1 a, T2 b)
{
	return b ? gcd(b, a % b) : a;
}
int main()
{
	std::cout << gcd(37u, 666u) << std::endl;
	std::cout << gcd(0u, false) << std::endl;
	return 0;
}

