#include <iostream>
using namespace std;
class Vehicle
{
    int fuel = 0;

public:
    void fill(int f)
    {
        fuel = fuel + f;
    }
    void print()
    {
        cout << "Tank Filled with " << fuel << " lters" << endl;
    }
};
int main()
{
    Vehicle v1, v2;
    v1.fill(10);
    v1.print();
    v2.fill(80);
    v2.print();
    return 0;
}
