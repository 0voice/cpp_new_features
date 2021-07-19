//传统的定义类型别名的方法是使用关键字typedef：
typedef double wages;

//也可以使用#define来定义别名（使用预处理器）
#define wages double

//在C++11中使用关键字using来进行别名声明，假设我们现在定义了结构体MyStruct，那么我们可以使用using为Mystruct类型设置一个别名：
using MS=MyStruct;

//在定义该结构体类型变量时，就可以使用MS作为类型名了
MS TempStruct;
