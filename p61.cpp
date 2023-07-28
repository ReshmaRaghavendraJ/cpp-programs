#include <iostream>
using namespace std;
class Number
{
private:
    int data;

public:
    void operator=(int v)
    {
        data = v;
    }
    operator int()
    {
        return data;
    }
};
class Binary
{
private:
    int bval;
    void convert(int n)
    {
        if (n > 0)
            convert(n / 2);
        cout << n % 2;
    }

public:
    void operator=(Number arg)
    {
        bval = arg;
    }
    friend ostream &operator<<(ostream &out, Binary arg)
    {
        int n = arg.bval;
        arg.convert(n);
        return out;
    }
};
int main()
{
    Number n;
    n = 5;
    Binary b;
    b = n;
    cout << n << endl
         << b;
    return 0;
}
