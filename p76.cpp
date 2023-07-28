#include <iostream>
using namespace std;
template <class T, class P>
class Shopping
{
    char item[20];
    T unit;
    P qty;

public:
    void read()
    {
        cout << "Enter item name:" << endl;
        cin >> item;
        cout << "'Enter unitprice and quantity:" << endl;
        cin >> unit;
        cin >> qty;
    }
    double totalamount()
    {
        double net = unit * qty;
        return net;
    }
};
int main()
{
    Shopping<int, int> s1;
    Shopping<int, float> s2;
    Shopping<float, float> s3;
    s1.read();
    s2.read();
    s3.read();
    cout << "Total amount=" << s1.totalamount() << endl;
    cout << "Total amount=" << s2.totalamount() << endl;
    cout << "Total amount=" << s3.totalamount() << endl;
    return 0;
}
