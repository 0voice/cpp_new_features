//非受限联合体：C++98中并不是所有数据类型都能够成为union的数据成员，不允许联合体拥有非POD(Plain Old Data)、静态或引用类型的成员。 
//C++11中取消了联合体对于数据成员的限制，任何非引用类型都可以成为联合体的数据成员，成为非受限联合体。

struct Student
{
	Student(bool g, int a): gender(g), age(a){}
	bool gender;
	int age;
};

union T
{
	Student s;	//C++98下编译失败，不是一个POD类型
	int id;
	char name[10];
};

int main()
{
	return 0;
}

//编译选项：g++ -std=c++98 union.cpp
