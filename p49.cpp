#include <iostream>
#include <string.h>
using namespace std;
class Coupon
{
private:
    int count, val;
    char code[10];

public:
    void read()
    {
        cout << "Enter Coupon code and value:" << endl;
        cin >> code >> val;
        count = 0;
    }
    char *getcode()
    {
        return code;
    }
    int getcount()
    {
        return count;
    }
    int getValue()
    {
        return val;
    }
    void updateCount()
    {
        count++;
    }
    void write()
    {
        cout << code << "\t" << val << "\t" << count << endl;
    }
};
int main()
{
    Coupon c[5];
    int choice, qty, price, total, i;
    for (int i = 0; i <= 4; i++)
        c[i].read();

    while (true)
    {
        cout << "1.Shop" << endl;
        cout << "2.List coupons" << endl;
        cout << "3.Exit" << endl;
        cout << "Enter your choice:" << endl;
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter the qty and price:" << endl;
            cin >> qty >> price;
            total = qty * price;
            cout << "Enter your coupon" << endl;
            char cc[10];
            cin.ignore();
            cin.getline(cc, 10);
            for (int i = 0; i <= 4; i++)
            {
                if (strcmp(c[i].getcode(), cc) == 0)
                {
                    if (c[i].getcount() < 3)
                    {
                        cout << "Same Coupon code" << c[i].getValue() << endl;
                        cout << "Pay Rupees:" << total - c[i].getValue() << endl;
                        c[i].updateCount();
                    }
                    else
                    {
                        cout << "Same Coupon code but 3 times used!!Sorrry";
                        cout << "Pay Rupees:" << total << endl;
                    }
                    break;
                }
            }
            if (i == 5)
                cout << "Invalid Coupon code..Pay rupees:" << total << endl;
        }
        else if (choice == 2)
        {
            cout << "Code   value   Count" << endl;
            for (int i = 0; i <= 4; i++)
                c[i].write();
        }
        else if (choice == 3)
            break;
    }
    return 0;
}
