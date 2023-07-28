#include <iostream>
#include <string.h>
using namespace std;
struct prod
{
    char pname[20];
    int cost;
};
struct prod s[] = {
    {"webcam", 25000},
    {"mobile", 20000},
    {"ipod", 2000},
    {"laptop", 80000},
    {"keyboard", 1500}};

class Warehouse
{
public:
    void list()
    {
        cout << "List all product names and Cost of the product:" << endl;
        cout << "----------------------------" << endl;
        for (int i = 0; i < 5; i++)
            cout << s[i].pname << s[i].cost << endl;
    }
    int getCost(char p[])
    {
        int cost = 0;
        for (int i = 0; i < 5; i++)
        {
            if (stricmp(s[i].pname, p) == 0)
            {
                cost = s[i].cost;
                break;
            }
        }
        return cost;
    }
};

class Salesoutlet : protected Warehouse
{
private:
    char name[30];

public:
    void read()
    {
        cout << "Enter customer name:" << endl;
        cin >> name;
    }
    void write()
    {
        cout << name << endl;
    }
};

class Marketing
{
public:
    float getDiscount(int total)
    {
        float dis;
        if (total > 5000)
            dis = total * 0.10;
        else
            dis = total - 0.4;
        return dis;
    }
};

class Software : private Salesoutlet, private Marketing
{
public:
    void shopping()
    {
        char pname[20];
        Warehouse::list();
        cout << "Enter Product" << endl;
        cin >> pname;
        int cost = Warehouse::getCost(pname);
        if (cost == 0)
            cout << "No such product exists" << endl;
        else
        {
            cout << "Product found and unit cost=" << cost << endl;
            int qty;
            cout << "Enter Quantity:" << endl;
            cin >> qty;
            int total = cost * qty;
            cout << "Total amount=" << total << endl;
            float dis = Marketing::getDiscount(total);
            cout << "Discount on bill=" << dis << endl;
            float net = total - dis;
            Salesoutlet::read();
            cout << "Net Amount=" << net << endl;
            cout << "Press any key to generate bill:" << endl;
            cout << "---------BILL----------" << endl;
            cout << "Customer Name:" << endl;
            Salesoutlet::write();
            cout << "Product purchased:" << pname << endl;
            cout << "Quantity:" << qty << endl;
            cout << "Unit Cost:" << cost << endl;
            cout << "Total Amount:" << total << endl;
            cout << "Discount:" << dis << endl;
            cout << "Net Amount:" << net << endl;
            cout << "-----------------" << endl;
        }
    }
};

int main()
{
    Software b;
    b.shopping();
    return 0;
}
