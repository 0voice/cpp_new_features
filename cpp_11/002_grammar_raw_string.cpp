#include <iostream>

using std::cout;
using std::endl;


//原始字符串(raw string)就是字符表示的就是自己，引号和斜杠均无需\进行转义，这在需要输出很多引号和斜杠代码中很方便。
//原始字符串是C++11新增的一个功能，程序中使用R"(a string)"来标识原始字符串：

//原始字符串同时包含其它特点：
//1. 字符串中的换行符将在屏幕上如实显示。
//2. 在表示字符串开头的"和(之间可以添加其它字符，不过必须在表示字符串结尾的)和"之间添加同样的字符。

int main(){
	cout << "I print \'\\\', \"\\n\" as I like." << endl;
	cout << R"(I print '\', "\n" as I like.)" << endl;
	cout << R"(I print '\', "\n" as I like.)" << endl;
	cout << R"haha(I print '\', "\n" and )" as I like.)haha" << endl;
}
