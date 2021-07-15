#include "array.hpp"
#include <iostream>
#include <array>
#include <tuple>
#include <string>
 
///
// https://msdn.microsoft.com/en-us/library/bb983093.aspx
int test_array_3()
{
	// array::assign: Replaces all elements
	typedef std::array<int, 4> Myarray;
 
	Myarray c0 = { 0, 1, 2, 3 };
 
	// display contents " 0 1 2 3"   
	for (Myarray::const_iterator it = c0.begin();
		it != c0.end(); ++it)
		std::cout << " " << *it;
	std::cout << std::endl;
 
	Myarray c1;
	c1.assign(4);
 
	// display contents " 4 4 4 4"   
	for (Myarray::const_iterator it = c1.begin();
		it != c1.end(); ++it)
		std::cout << " " << *it; // 4 4 4 4
	std::cout << std::endl;
 
	return 0;
}
 
/
// reference: http://en.cppreference.com/w/cpp/container/array
int test_array_2()
{
	// construction uses aggregate initialization
	std::array<int, 3> a1{ { 1, 2, 3 } }; // double-braces required in C++11 (not in C++14)
	std::array<int, 3> a2 = { 1, 2, 3 };  // never required after =
	std::array<std::string, 2> a3 = { std::string("a"), "b" };
 
	// container operations are supported
	std::sort(a1.begin(), a1.end());
	std::reverse_copy(a2.begin(), a2.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << '\n';
 
	// ranged for loop is supported
	for (const auto& s : a3)
		std::cout << s << ' ';
	std::cout << '\n';
 
	return 0;
}
 
//
// reference: http://www.cplusplus.com/reference/array/array/
 
// default initialization (non-local = static storage):
std::array<int, 3> global;               // zero-initialized: {0,0,0}
 
int test_array_1()
{
{ // array::array: The array classes are aggregate types, and thus have no custom constructors.
  // default initialization (local = automatic storage):
	std::array<int, 3> first;              // uninitialized:    {?,?,?}
 
	// initializer-list initializations:
	std::array<int, 3> second = { 10, 20 };   // initialized as:   {10,20,0}
	std::array<int, 3> third = { 1, 2, 3 };    // initialized as:   {1,2,3}
 
	// copy initialization:
	std::array<int, 3> fourth = third;     // copy:             {1,2,3}
 
	std::cout << "The contents of fourth are:";
	for (auto x : fourth) std::cout << ' ' << x;
	std::cout << '\n';
}
 
{ // array::at: Returns a reference to the element at position n in the array
	std::array<int, 10> myarray;
 
	// assign some values:
	for (int i = 0; i < 10; i++) myarray.at(i) = i + 1;
 
	// print content:
	std::cout << "myarray contains:";
	for (int i = 0; i < 10; i++)
		std::cout << ' ' << myarray.at(i);
	std::cout << '\n';
}
 
{ // array::back: Returns a reference to the last element in the array container.
  // array::front: Returns a reference to the first element in the array container.
	std::array<int, 3> myarray = { 5, 19, 77 };
 
	std::cout << "front is: " << myarray.front() << std::endl;   // 5
	std::cout << "back is: " << myarray.back() << std::endl;     // 77
 
	myarray.back() = 50;
	myarray.front() = 999;
 
	std::cout << "myarray now contains:";
	for (int& x : myarray) std::cout << ' ' << x; // 999 19 50
	std::cout << '\n';
}
 
{ // array::begin: Returns an iterator pointing to the first element in the array container.
  // array::end: Returns an iterator pointing to the past-the-end element in the array container.
	std::array<int, 5> myarray = { 2, 16, 77, 34, 50 };
 
	std::cout << "myarray contains:";
	for (auto it = myarray.begin(); it != myarray.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';
}
 
{ // array::cbegin: Returns a const_iterator pointing to the first element in the array container.
  // array::cend: Returns a const_iterator pointing to the past-the-end element in the array container.
	std::array<int, 5> myarray = { 2, 16, 77, 34, 50 };
 
	std::cout << "myarray contains:";
 
	for (auto it = myarray.cbegin(); it != myarray.cend(); ++it)
		std::cout << ' ' << *it;   // cannot modify *it
 
	std::cout << '\n';
}
 
{ // array::crbegin: Returns a const_reverse_iterator pointing to the last element in the array container.
  // array::crend: Returns a const_reverse_iterator pointing to the theoretical element preceding
  // the first element in the vector, which is considered its reverse end.
	std::array<int, 6> myarray = { 10, 20, 30, 40, 50, 60 };
 
	std::cout << "myarray backwards:";
	for (auto rit = myarray.crbegin(); rit < myarray.crend(); ++rit)
		std::cout << ' ' << *rit;   // cannot modify *rit
 
	std::cout << '\n';
}
 
{ // array::data: Returns a pointer to the first element in the array object.
	const char* cstr = "Test string";
	std::array<char, 12> charray;
 
	std::memcpy(charray.data(), cstr, 12);
	std::cout << charray.data() << '\n';
}
 
{ // array::empty: Returns a bool value indicating whether the array container is empty, i.e. whether its size is 0.
	std::array<int, 0> first;
	std::array<int, 5> second;
	std::cout << "first " << (first.empty() ? "is empty" : "is not empty") << '\n';
	std::cout << "second " << (second.empty() ? "is empty" : "is not empty") << '\n';
}
 
{ // array::fill: Sets val as the value for all the elements in the array object.
	std::array<int, 6> myarray;
 
	myarray.fill(5);
 
	std::cout << "myarray contains:";
	for (int& x : myarray) { std::cout << ' ' << x; }
 
	std::cout << '\n';
}
 
{ // array::max_size: Returns the maximum number of elements that the array container can hold
  // array::size: Returns the number of elements in the array container.
	std::array<int, 10> myints;
	std::cout << "size of myints: " << myints.size() << '\n';
	std::cout << "max_size of myints: " << myints.max_size() << '\n';
	std::cout << "sizeof(myints): " << sizeof(myints) << std::endl;
}
 
{ // array::operator[]: Returns a reference to the element at position n in the array container.
	std::array<int, 10> myarray;
	unsigned int i;
 
	// assign some values:
	for (i = 0; i < 10; i++) myarray[i] = i;
 
	// print content
	std::cout << "myarray contains:";
	for (i = 0; i < 10; i++)
		std::cout << ' ' << myarray[i];
	std::cout << '\n';
}
 
{ // array::rbegin: Returns a reverse iterator pointing to the last element in the array container.
  // array::rend: Returns a reverse iterator pointing to the theoretical element preceding
  // the first element in the array (which is considered its reverse end).
	std::array<int, 4> myarray = { 4, 26, 80, 14 };
 
	std::cout << "myarray contains:";
	for (auto rit = myarray.rbegin(); rit < myarray.rend(); ++rit)
		std::cout << ' ' << *rit;
 
	std::cout << '\n';
}
 
{ // array::swap: Exchanges the content of the array by the content of x,
  // which is another array object of the same type (including the same size).
	std::array<int, 5> first = { 10, 20, 30, 40, 50 };
	std::array<int, 5> second = { 11, 22, 33, 44, 55 };
 
	first.swap(second);
 
	std::cout << "first:";
	for (int& x : first) std::cout << ' ' << x;
	std::cout << '\n';
 
	std::cout << "second:";
	for (int& x : second) std::cout << ' ' << x;
	std::cout << '\n';
}
 
{ // std::get: Returns a reference to the Ith element of array arr
  // std::tuple_element<array>: Accesses the static type of the elements in an array object as if it was a tuple.
	std::array<int, 3> myarray = { 10, 20, 30 };
	std::tuple<int, int, int> mytuple(10, 20, 30);
 
	std::tuple_element<0, decltype(myarray)>::type myelement;  // int myelement
 
	myelement = std::get<2>(myarray);
	std::get<2>(myarray) = std::get<0>(myarray);
	std::get<0>(myarray) = myelement;
 
	std::cout << "first element in myarray: " << std::get<0>(myarray) << "\n";
	std::cout << "first element in mytuple: " << std::get<0>(mytuple) << "\n";
}
 
{ // std::relational operators(array): Performs the appropriate comparison operation between the array containers lhs and rhs.
	std::array<int, 5> a = { 10, 20, 30, 40, 50 };
	std::array<int, 5> b = { 10, 20, 30, 40, 50 };
	std::array<int, 5> c = { 50, 40, 30, 20, 10 };
 
	if (a == b) std::cout << "a and b are equal\n";
	if (b != c) std::cout << "b and c are not equal\n";
	if (b<c) std::cout << "b is less than c\n";
	if (c>b) std::cout << "c is greater than b\n";
	if (a <= b) std::cout << "a is less than or equal to b\n";
	if (a >= b) std::cout << "a is greater than or equal to b\n";
}
 
	return 0;
}
