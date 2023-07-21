#include <iostream>
using namespace std;
class Company
{
private:
    int profit;

public:
    void read()
    {
        cout << "EnterProfit" << endl;
        cin >> profit;
    }
    friend void iTax(Company);
};
void iTax(Company arg)
{
    float tax = arg.profit * 0.12;
    cout << "Tax:"
         << "\t"
         << tax << endl;
}
int main()
{
    Company c;
    c.read();
    iTax(c);
    return 0;
}
