#include <iostream>
using namespace std;
class Adharauth
{
public:
    void auth()
    {
        cout << "Authenticating adhar card" << endl;
    }
};
class Vaccine : private Adharauth
{
public:
    void reg()
    {
        // cout << "Registration of vaccination" << endl;
        auth();
    }
};
int main()
{
    Vaccine v;
    v.reg();
    return 0;
}
