class HasPtr {
public:
    HasPtr (const std::string &s = std::string () ):
        ps (new std::string(s) ) , i(0） { }
    //对ps指向的string，每个HasPtr对象都有自己的拷贝
    HasPtr(const HasPtr &p):
        ps (new std::string (*p.ps)), i(p.i) { }
    HasPtr& operator=(const HasPtr &);
    ~HasPtr() { delete ps; }
private:
    std::string *ps;
    int i;
);

class HasPtr {
public:

    //添加的移动构造函数
    HasPtr(HasPtr &&p) noexcept : ps(p.ps), i(p.i) {p.ps = 0 ; }
    //赋值运算符既是移动赋值运算符，也是拷贝赋值运算符
    HasPtr& operator= (HasPtr rhs)
        { swap (*this, rhs) ; return *this; }
    //其他成员的定义，同13.2.1节（第453页)
};
