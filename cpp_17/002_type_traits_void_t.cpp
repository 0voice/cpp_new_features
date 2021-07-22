struct NoInnerType
{
	int m_i;
};
 
struct HaveInnerType
{
	using type = int; //类型别名
	void myfunc() {}
};
 
 
//泛化版本
template <typename T,typename U = std::void_t<> >
struct HasTypeMem : std::false_type  //struct 默认是public ,class默认是private继承
{
};
//特化版本
template <typename T>
struct HasTypeMem<T, std::void_t<typename T::type> > : std::true_type 
{
};
