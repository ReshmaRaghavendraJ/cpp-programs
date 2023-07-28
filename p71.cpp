#include <iostream>
using namespace std;
class BM
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int cube(int a)
    {
        return a * a * a;
    }
};
class EM
{
public:
    int fact(int n)
    {
        int f = 1;
        for (int i = 1; i <= n; i++)
            f = f * i;
        return f;
    }
};
class Util : public BM, public EM
{
public:
    void binary(int a)
    {
        if (a != 0)
            binary(a / 2);
        cout << a % 2;
    }
};
int main()
{
    Util u;
    cout << u.add(2, 5) << endl;
    cout << u.cube(6) << endl;
    cout << u.fact(4) << endl;
    u.binary(14);
    return 0;
}
