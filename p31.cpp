#include <iostream>
using namespace std;
float amount(float, float = 2, float = 0.12);
int main()
{
    float unit, qty, tax, net;
    cout << "Enter unit" << endl;
    cin >> unit;
    cout << amount(unit);

    cout << "Enter unit,qty" << endl;
    cin >> unit >> qty;
    cout << amount(unit, qty) << endl;

    cout << "Enter unit,qty,tax" << endl;
    cin >> unit >> qty >> tax;
    cout << amount(unit, qty, tax) << endl;
}
float amount(float unit, float qty, float tax)
{
    float total = unit * qty;
    float totaltax = total * tax;
    float net = total * totaltax;
    return net;
}
