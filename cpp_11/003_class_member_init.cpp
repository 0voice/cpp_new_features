#include <string>
using namespace std;

class Mem
{
public:
    Mem(int i) : m(i)
    {}

 private:
    int m;
};

class Group
{
public:
    Group() {}                
    Group(int a) : data(a) {} 
    Group(Mem m) : mem(m) {}  
    Group(int a, Mem m, string n) : data(a), mem(m), name(n)
    {}

private:
    int data = 1;
    Mem mem{0};
    string name{" Group"};
};
