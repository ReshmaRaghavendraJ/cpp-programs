#include <iostream>
using namespace std;
class Plot;
class Axis
{
private:
    int x, y;
    friend class Plot;
};
class Plot
{
public:
    void read(Axis &obj1)
    {
        cin >> obj1.x >> obj1.y;
    }
    void display(Axis obj1)
    {
        obj1.x++;
        obj1.y--;
        cout << "x " << obj1.x << endl;
        cout << "y " << obj1.y << endl;
    }
};
int main()
{
    Axis a;
    Plot p;
    p.read(a);
    p.display(a);
    return 0;
}
