class MoveConstructor
{
public:
	MoveConstructor() :m_ptr(new int(0))
	{
		std::cout << "construct" << std::endl;
	}
 
	MoveConstructor(const MoveConstructor& a):m_ptr(new int(*a.m_ptr)) //深拷贝
	{
		std::cout << "copy construct" << std::endl;
	}
 
	MoveConstructor(MoveConstructor&& a) :m_ptr(a.m_ptr)
	{
		a.m_ptr = nullptr;
		std::cout << "move construct:" << std::endl;
	}
 
	~MoveConstructor()
	{
		std::cout << "destruct" << std::endl;
		delete m_ptr;
	}
 
private:
	int* m_ptr;
};
 
MoveConstructor Get(bool flag)
{
	MoveConstructor a;
	MoveConstructor b;
	if (flag)
		return a;
	else
		return b;
}
 
int right_value_ref2()
{
	MoveConstructor a = Get(false);
 
	return 0;
}
