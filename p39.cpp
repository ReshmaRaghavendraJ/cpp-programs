#include <iostream>
using namespace std;
class Axis
{
private:
    int x, y;

public:
    void set(int _x, int _y)
    {
        x = _x;
        y = _y;
    }
    void print()
    {
        cout << x << "," << y << endl;
    }
    void whereLocated()
    {
        if (x == 0 && y == 0)
            cout << "Origin" << endl;
        else if (x != 0 && y == 0)
            cout << "X-axis" << endl;
        else if (y != 0 && x == 0)
            cout << "Y-axis" << endl;
        else
            cout << "Someother quadrant" << endl;
    }
};
int main()
{
    Axis a1, a2, a3;
    a1.set(0, 20);
    a2.set(35, 0);
    a3.set(0, 0);
    a1.print();
    a2.print();
    a3.print();
    a1.whereLocated();
    a2.whereLocated();
    a3.whereLocated();
    return 0;
}
