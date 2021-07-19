struct Foo {
    Foo(int _val) : val(_val) { std::cout << "Foo...\n"; }
    ~Foo() { std::cout << "~Foo...\n"; }
    int val;
};
 
int main()
{
    std::unique_ptr<Foo> up1(new Foo(1));
    std::unique_ptr<Foo> up2(new Foo(2));
 
    up1.swap(up2);
 
    std::cout << "up1->val:" << up1->val << std::endl;
    std::cout << "up2->val:" << up2->val << std::endl;
}
