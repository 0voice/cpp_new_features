#include "numeric_limits.hpp"
#include <limits>
#include <iostream>

int main()
{
	std::cout << std::boolalpha;
	std::cout << "Minimum value for int: " << std::numeric_limits<int>::min() << std::endl;
	std::cout << "Maximum value for int: " << std::numeric_limits<int>::max() << std::endl;
	std::cout << "int is signed: " << std::numeric_limits<int>::is_signed << std::endl;
	std::cout << "Non-sign bits in int: " << std::numeric_limits<int>::digits << std::endl;
	std::cout << "int has infinity: " << std::numeric_limits<int>::has_infinity << std::endl;
 
	std::cout << "Minimum value for float: " << std::numeric_limits<float>::min() << std::endl; // min returns the smallest positive value the type can encode, not the lowest
	std::cout << "Lowest value for float: " << std::numeric_limits<float>::lowest() << std::endl; // the lowest value
	std::cout << "Maximum value for float: " << std::numeric_limits<float>::max() << std::endl;
	std::cout << "float is signed: " << std::numeric_limits<float>::is_signed << std::endl;
	std::cout << "Non-sign bits in float: " << std::numeric_limits<float>::digits << std::endl;
	std::cout << "float has infinity: " << std::numeric_limits<float>::has_infinity << std::endl;
 
	std::cout << "Minimum value for unsigned short: " << std::numeric_limits<unsigned short>::min() << std::endl;
	std::cout << "Maximum value for unsigned short: " << std::numeric_limits<unsigned short>::max() << std::endl;
 
	std::cout << "is_specialized(float): " << std::numeric_limits<float>::is_specialized << std::endl;
	std::cout << "is_integer(float): " << std::numeric_limits<float>::is_integer << std::endl;
	std::cout << "is_exact(float): " << std::numeric_limits<float>::is_exact << std::endl;
	std::cout << "is_bounded(float): " << std::numeric_limits<float>::is_bounded << std::endl;
	std::cout << "is_modulo(float): " << std::numeric_limits<float>::is_modulo << std::endl;
	std::cout << "is_iec559(float): " << std::numeric_limits<float>::is_iec559 << std::endl;
	std::cout << "digits10(float): " << std::numeric_limits<float>::digits10 << std::endl;
	std::cout << "radix(float): " << std::numeric_limits<float>::radix << std::endl;
	std::cout << "min_exponent(float): " << std::numeric_limits<float>::min_exponent << std::endl;
	std::cout << "max_exponent(float): " << std::numeric_limits<float>::max_exponent << std::endl;
	std::cout << "min_exponent10(float): " << std::numeric_limits<float>::min_exponent10 << std::endl;
	std::cout << "max_exponent10(float): " << std::numeric_limits<float>::max_exponent10 << std::endl;
	std::cout << "epsilon(float): " << std::numeric_limits<float>::epsilon() << std::endl;
	std::cout << "round_style(float): " << std::numeric_limits<float>::round_style << std::endl;
 
	std::cout << "The smallest nonzero denormalized value for float: "
		<< std::numeric_limits<float>::denorm_min()<< std::endl;
	std::cout << "The difference between 1 and the smallest value greater than 1 for float: "
		<< std::numeric_limits<float>::epsilon()<< std::endl;
	std::cout << "Whether float objects allow denormalized values: "
		<< std::numeric_limits<float>::has_denorm << std::endl;
	std::cout << "Whether float objects can detect denormalized loss: "
		<< std::numeric_limits<float>::has_denorm_loss << std::endl;
	std::cout << "Whether float objects have quiet_NaN: "
		<< std::numeric_limits<float>::has_quiet_NaN << std::endl;
	std::cout << "Whether float objects have a signaling_NaN: "
		<< std::numeric_limits<float>::has_signaling_NaN << std::endl;
	std::cout << "The base for type float is:  "
		<< std::numeric_limits<float>::radix << std::endl;
	std::cout << "The maximum rounding error for type float is:  "
		<< std::numeric_limits<float>::round_error() << std::endl;
	std::cout << "The rounding style for a double type is: "
		<< std::numeric_limits<double>::round_style << std::endl;
	std::cout << "The signaling NaN for type float is:  "
		<< std::numeric_limits<float>::signaling_NaN() << std::endl;
	std::cout << "Whether float types can detect tinyness before rounding: "
		<< std::numeric_limits<float>::tinyness_before << std::endl;
	std::cout << "Whether float types have implemented trapping: "
		<< std::numeric_limits<float>::traps << std::endl;
 
	return 0;
}
