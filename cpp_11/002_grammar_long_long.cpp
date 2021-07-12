/*
g++ -D__STDC_FORMAT_MACROS -o test_int64 -g -O0 002_grammar_long_long.cpp.cpp 
*/  
#include <stdio.h>  
#include <inttypes.h>  

int main(int argc, char** argv){
	long long int lli=-900000000000000LL; // 有符号的long long 变量lli
	unsigned long long int ulli=-900000000000ULL; // 无符号的 unsigned long long 变量ulli。

    int64_t value = 0xFFFFFFFFFFFF;
    printf("int64_t=%"PRId64", sizeof(int64_t)=%d\n", value, sizeof(int64_t));

	return 0;
}
