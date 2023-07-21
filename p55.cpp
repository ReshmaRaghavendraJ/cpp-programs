#include <iostream>
using namespace std;
class Complex
{
private:
    float r, i;

public:
    void read()
    {
        cout << "Enter real and imaginary numbers:" << endl;
        cin >> r >> i;
    }
    void write()
    {
        cout << r << "+i" << i << endl;
    }
    friend Complex add(Complex, Complex);
};
Complex add(Complex arg1, Complex arg2)
{
    Complex temp;
    temp.r = arg1.r + arg2.r;
    temp.i = arg1.i + arg2.i;
    return temp;
}
int main()
{
    Complex c1, c2, c3;
    c1.read();
    c2.read();
    c3 = add(c1, c2);
    c1.write();
    c2.write();
    c3.write();
    return 0;
}
