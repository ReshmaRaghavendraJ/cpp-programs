#include <iostream>
using namespace std;
class Bank
{
private:
    int accno, balance;
    static int count, total;

public:
    Bank()
    {
        cout << "Enter Account number and initial amount:" << endl;
        cin >> accno >> balance;
    }
    static void report()
    {
        cout << "Total customer count:" << count << endl;
        cout << "Total Cash in Bank:" << total << endl;
    }
    void Deposit(int depo)
    {
        balance = balance + depo;
        total = total + depo;
    }
    void withdraw(int with)
    {
        balance = balance - with;
        total = total - with;
    }
    void chkBalance()
    {
        cout << "---------------------" << endl;
        cout << "Account Number" << accno << endl;
        cout << "Account Balance" << balance << endl;
        cout << "---------------------" << endl;
    }
};
int Bank::count = 0, Bank::total = 0;
int main()
{
    Bank b1, b2, b3;
    b1.Deposit(2000);
    b3.Deposit(5000);

    b1.withdraw(500);
    b2.withdraw(200);
    b2.chkBalance();
    b3.withdraw(1000);

    b1.chkBalance();
    b3.chkBalance();

    Bank::report();
    return 0;
}
