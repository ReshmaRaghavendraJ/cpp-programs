#include <iostream>
using namespace std;
class Cycle
{
public:
    void pedalling()
    {
        cout << "Manual Pedalling" << endl;
    }
};
class Motorcycle : public Cycle
{
public:
    void acceleration()
    {
        cout << "Automatic Pedalling" << endl;
    }
};
int main()
{
    Motorcycle m;
    m.pedalling();
    m.acceleration();
    return 0;
}
