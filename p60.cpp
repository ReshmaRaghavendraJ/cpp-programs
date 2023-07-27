#include <iostream>
using namespace std;
class Product
{
private:
    int pid;
    float cost;
    char pname[20];

public:
    void read()
    {
        cout << "Enter pid,pname,cost:" << endl;
        cin >> pid >> pname >> cost;
    }
    operator int()
    {
        return pid;
    }
    operator float()
    {
        return cost;
    }
};
int main()
{
    Product p;
    p.read();
    int no = p;
    float price = p;
    cout << "Product number is:" << no << endl;
    cout << "Product price is:" << price << endl;
    return 0;
}
