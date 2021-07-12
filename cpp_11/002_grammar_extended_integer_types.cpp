//对于有符号的，下面的类型是等价的：
//long long、signed long long、long long int、signed long long int; 而unsigned long long 和 unsigned long long int 也是等价的。

//与 long long 整型相关的一共有3个：
//LONG_MIN、LONG_MAX 和ULONG_MAX, 它们分别代表了平台上最小的long long 值、最大的long long 值，以及最大的unsigned long long 值。

int main() { 
	long long int lli=-900000000000000LL; // 有符号的long long 变量lli
	unsigned long long int ulli=-900000000000ULL; // 无符号的 unsigned long long 变量ulli
  return 0;
}
