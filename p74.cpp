#include <iostream>
using namespace std;
class Horn
{
public:
    void buzz()
    {
        cout << "ZZZZZZZZ" << endl;
    }
};
class Car
{
private:
    Horn h;

public:
    void drive()
    {
        h.buzz();
    }
};
int main()
{
    Car c;
    c.drive();
    return 0;
}
