#include <iostream>
using std::cout;
using std::endl;
 
namespace myname {
 
struct nullptr_t
{
    void * _;
 
    struct __nat {int __for_bool_;};
 
    nullptr_t(int __nat::*) {} // 构造函数，参数可以是0（空指针），或者&__nat::__for_bool_
 
    operator int __nat::*() const {return 0;} // 不理解为什么转换为bool型时会调用此转换函数
	// operator bool() const {return 0; /* or return false; */} // 为什么不这样实现？
 
    template <class _Tp> 
	operator _Tp* () const {return 0;} // 转换为非成员变量指针、非成员函数指针的普通指针
	
    template <class _Tp, class _Up> 
	operator _Tp _Up::* () const {return 0;} // 转换为成员变量指针或成员函数指针
 
    friend bool operator==(nullptr_t, nullptr_t) {return true;}
    friend bool operator!=(nullptr_t, nullptr_t) {return false;}
    friend bool operator<(nullptr_t, nullptr_t) {return false;}
    friend bool operator<=(nullptr_t, nullptr_t) {return true;}
    friend bool operator>(nullptr_t, nullptr_t) {return false;}
    friend bool operator>=(nullptr_t, nullptr_t) {return true;}
};
 
struct Test {};
 
}
 
using namespace myname;
 
inline nullptr_t __get_nullptr_t() {return nullptr_t(0);}
#define nullptr __get_nullptr_t()
 
int main(int argc, char *argv[])
{
	char *pch = nullptr;	// ok, __get_nullptr_t() => nullptr_t::nullptr_t(0) => template <class _Tp> nullptr_t::operator _Tp* () const
	int *pint = nullptr;	// ok, __get_nullptr_t() => nullptr_t::nullptr_t(0) => template <class _Tp> nullptr_t::operator _Tp* () const
	bool    b = nullptr;	// ok, __get_nullptr_t() => nullptr_t::nullptr_t(0) => nullptr_t::operator int __nat::*() const
	//int     n = nullptr;	// error: cannot convert 'myname::nullptr_t' to 'int' in initialization
	int Test::*p = nullptr;	// ok, __get_nullptr_t() => nullptr_t::nullptr_t(0) => template <class _Tp, class _Up> operator _Tp _Up::* () const
	void (Test::*pfn)(int, char) = nullptr;	// ok, __get_nullptr_t() => nullptr_t::nullptr_t(0) => template <class _Tp, class _Up> operator _Tp _Up::* () const
	return 0;
}
