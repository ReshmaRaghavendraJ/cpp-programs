#include <iostream>
using namespace std;
class Bank
{
private:
    int amount = 0;

public:
    void deposit(int amt)
    {
        amount = amount + amt;
    }
    void withdraw(int v)
    {
        if (amount - v < 0)
            cout << "Not enough money to deposit" << endl;
        else
            amount = amount - v;
    }
    int getBalance()
    {
        return amount;
    }
};
int main()
{
    int n, choice, acctno, amount;
    cout << "Enter number of customers:" << endl;
    cin >> n;
    Bank b[n];
    cout << "Enter your Choice:" << endl;
    while (true)
    {
        cout << "1.Deposit" << endl;
        cout << "2.Withdraw" << endl;
        cout << "3.Balance" << endl;
        cout << "4.Exit" << endl;
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter your account number and amount:" << endl;
            cin >> acctno >> amount;
            b[acctno].deposit(amount);
        }
        else if (choice == 2)
        {
            cout << "Enter account number and amount to withdraw:" << endl;
            cin >> acctno >> amount;
            b[acctno].withdraw(amount);
        }
        else if (choice == 3)
        {
            cout << "Enter your account number:" << endl;
            cin >> acctno;
            cout << "Your balance is:" << b[acctno].getBalance() << endl;
        }
        else if (choice == 4)
            break;
    }
    return 0;
}
