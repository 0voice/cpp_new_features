//C++对以下C99特性的支持纳入了新标准之中：
//1、C99中的预定义宏
//2、__func__预定义标识符
//3、_Pragma操作符
//4、不定参数宏定义以及__VA_ARGS__
//5、宽窄字符串连接

#include <iostream>
using namespace std;

int main()
{
	cout << "Standerd Clib" << __STDC_HOSTED__ << endl;
	cout << "Standerd C" << __STDC__ << endl;
	//cout << "C Standerd version " << __STDC_VERSION__ << endl;
	//cout << "ISO/IEC" << __STDC_ISO_10646__ << endl;
	return 0;
}
