#include <iostream>
#include <string>
#include <complex>
 
template<typename T>
struct D : std::string, std::complex<T>
{
	std::string data;
};
 
int main(void)
{
	D<float> s{ {"hello"}, {4.5,6.7}, "world" }; // OK since C++17
	const auto result = std::is_aggregate<decltype(s)>::value;
	std::cout << result << std::endl;
 
	return 0;
}
