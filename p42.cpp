#include <iostream>
using namespace std;
class Bank
{
private:
    int amount = 0;

public:
    void deposit(int amt)
    {
        amount = amt;
    }
    void withdraw(int w)
    {
        if (amount - w < 0)
            cout << "Sorry!! you can't withdraw money" << endl;
        else
            amount = amount - w;
    }
    void printBalance()
    {
        cout << "Your Blance is:" << amount << endl;
    }
};
int main()
{
    Bank b1, b2;
    b1.deposit(3000);
    b2.deposit(5000);

    b1.printBalance();
    b2.printBalance();

    b1.withdraw(500);
    b2.withdraw(1000);

    b1.printBalance();
    b2.printBalance();

    return 0;
}
