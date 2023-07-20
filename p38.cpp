#include <iostream>
using namespace std;
class Airtel
{
private:
    float curr;

public:
    void activate()
    {
        int curr = 10;
    }
    void call()
    {
        if (curr > 0)
        {
            curr = curr - 0.5;
        }
        else
            cout << "Insufficient balance" << endl;
    }
    float getBalance()
    {
        return curr;
    }
};
int main()
{
    Airtel sim1, sim2;
    sim1.activate();
    sim2.activate();
    for (int i = 1; i <= 3; i++)
        sim1.call();
    cout << "Sim1 balance:" << sim1.getBalance() << endl;
    cout << "Sim2 balance:" << sim2.getBalance() << endl;
    return 0;
}
