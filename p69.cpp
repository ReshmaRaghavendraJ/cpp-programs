#include <iostream>
using namespace std;
class Calc
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
};
class Extendedcalc : public Calc
{
public:
    int mul(int a, int b)
    {
        int s = 0;
        for (int i = 1; i <= b; i++)
            s = add(s, a);
        return s;
    }
};
int main()
{
    Extendedcalc e;
    cout << e.add(10, 20) << endl;
    cout << e.mul(5, 3) << endl;
    return 0;
}
