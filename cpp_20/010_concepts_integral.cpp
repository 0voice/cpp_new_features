#include <concepts>
#include <iostream>
 
void print(std::integral auto i) {
    std::cout << "Integral: " << i << '\n';
}
 
void print(auto x) {
    std::cout << "Non-integral: " << x << '\n';
}
 
int main()
{
    print( 'o' ); static_assert( std::integral<char> );
    print( 007 ); static_assert( std::integral<int> );
    print( 2e2 ); static_assert( !std::integral<float> );
    print("∫∫∫"); static_assert( !std::integral<decltype("")> );
}
