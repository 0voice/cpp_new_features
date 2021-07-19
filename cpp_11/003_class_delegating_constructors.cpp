class A
{
    private:
        int a;
        int b;
        char c;
        char d;
    public:
        A(int num0,int num1,char C):a(num0),b(num1),c(C){}
        A(int num0,char C):A(num0,0,C){}//b默认初始化为0
        A(int num0):A(num0,'p'){b=1;}//b重新赋值为1
        void getMembers()
        {
            cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
        }
};
