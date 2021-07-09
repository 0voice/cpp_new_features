#include <climits>
#include <cstdio>
using namespace std;
 
// 编译选项:g++ -std=c++11 2-2-1.cpp
int main()<span style="font-family: Arial, Helvetica, sans-serif;">{</span>
    long long ll_min = LLONG_MIN;
    long long ll_max = LLONG_MAX;
    unsigned long long ull_max = ULLONG_MAX;
    printf("min of long long: %lld\n", ll_min); // min of long long: -9223372036854775808
    printf("max of long long: %lld\n", ll_max); // max of long long: 9223372036854775807
    printf("max of unsigned long long: %llu\n", ull_max);   // max of unsigned long long: 18446744073709551615
}
