#include <iostream>
using namespace std;
class Airtel
{
private:
    float curr = 10;

public:
    void Recharge(float rs)
    {
        curr = curr + rs;
    }
    void call()
    {
        if (curr - 0.02 < 0)
            cout << "Not Enough Balance" << endl;
        else
            curr = curr - 0.02;
    }
    void balance()
    {
        cout << "your balance is:" << curr << endl;
    }
};
int main()
{
    Airtel a1, a2;
    a1.balance();
    a1.Recharge(20.5);
    a1.call();
    a1.balance();
    for (int i = 1; i <= 10; i++)
        a2.call();
    a2.Recharge(15.0);
    a2.balance();
    return 0;
}
