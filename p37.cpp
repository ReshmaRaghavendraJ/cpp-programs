#include <iostream>
using namespace std;
class Axis
{
private:
    int x, y;

public:
    void init()
    {
        x = 10;
        y = 20;
    }
    void forward()
    {
        x++;
        y++;
    }
    void print()
    {
        cout << x << endl
             << y << endl;
    }
};
int main()
{
    Axis p1, p2;
    p1.init();
    p1.forward();
    p2.forward();
    p1.print();
    p2.print();
    return 0;}
