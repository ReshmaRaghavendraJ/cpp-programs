#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
class Cart
{
private:
    int cost;
    int qty;

public:
    Cart()
    {
        qty = 1;
        cost = rand() % 2000;
    }
    void operator++()
    {
        qty = qty + 1;
    }
    void operator--()
    {
        if (qty > 1)
            qty = qty - 1;
    }
    void print()
    {
        cout << "quantity:" << qty << endl;
        cout << "Cost:" << cost << endl;
    }
};
int main()
{
    srand(time(NULL));
    Cart a, b;
    ++a;
    a.print();
    for (int i = 1; i <= 5; i++)
        ++b;
    b.print();
    return 0;
}
