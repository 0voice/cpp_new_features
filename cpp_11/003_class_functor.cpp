class Tax
{
private:
    float rate;
    int base;
public:
    Tax(float r, int b)
        :rate(r),
        base(b)
    {}
    float operator()(float money){ return (money - base)*rate; }
};

int main(int argc, char *argv[])
{
    //===functor
    Tax high(0.40, 30000);
    Tax middle(0.25, 20000);

    cout << "tax over 3w: " << high(37500) << endl;
    cout << "tax over 2w: " << middle(27500) << endl;
}
