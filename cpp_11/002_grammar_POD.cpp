//一个对象既是普通类型（Trivial Type）又是标准布局类型（Standard-layout Type）那么这个对象就是POD类型。
//为什么我们需要 POD 类型满足这些条件呢，POD 类型在源码层级的操作上兼容于 ANSI C。POD 对象与 C 语言中的
//对象具有一些共同的特性，包括初始化、复制、内存布局与寻址：
//（1）可以使用字节赋值，比如用 memset、memcpy 对 POD 类型进行赋值操作；
//（2）对 C 内存布局兼容，POD 类型的数据可以使用 C 函数进行操作且总是安全的；
//（3）保证了静态初始化的安全有效，静态初始化可以提高性能，如将 POD 类型对象放入 BSS 段默认初始化为 0。


//POD类型的二进制拷贝案例

#include <iostream> 
using namespace std;

class A {
public:
	int x;
	double y;
};

int main() {
	if (std::is_pod<A>::value) {
		std::cout << "before" << std::endl;
		A a;
		a.x = 8;
		a.y = 10.5;
		std::cout << a.x << std::endl;
		std::cout << a.y << std::endl;

		size_t size = sizeof(a);
		char *p = new char[size];
		memcpy(p, &a, size);
		A *pA = (A*)p;

		std::cout << "after" << std::endl;
		std::cout << pA->x << std::endl;
		std::cout << pA->y << std::endl;

		delete p;
	}
	return 0;
}
