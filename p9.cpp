#include <iostream>
using namespace std;
int main()
{
    int prmeter, cumeter, unit, total;
    cout << "Enter previous meter reading and current meter reading:" << endl;
    cin >> prmeter >> cumeter;
    cout << "previous meter reading:" << prmeter << endl
         << "Current meter reading:" << cumeter << endl;
    unit = cumeter - prmeter;
    cout << "Total units consumed:" << unit << endl;
    if (unit <= 250)
        total = unit * 2;
    else if (unit > 250 && unit <= 350)
        total = 500 + (unit - 250) * 4;
    else if (unit > 350)
        total = 900 + (unit - 350) * 6;
    cout << "Total amount is:" << total << endl;
    return 0;
}
