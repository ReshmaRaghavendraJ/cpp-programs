#include <iostream>
using namespace std;
class iBrowse
{
private:
    int id, hrs, used;
    static int slno, thrs, tused;

public:
    static void summary()
    {
        cout << "-------------" << endl;
        cout << "Total customer count:" << slno - 1 << endl;
        cout << "Total hours rented:" << thrs << endl;
        cout << "Total hours used:" << tused << endl;
        cout << "Total Remaining hours:" << thrs - tused << endl;
    }
    void Register()
    {
        cout << "Enter your id and hrs:" << endl;
        cin >> id >> hrs;
        used = 0;
    }
    void Browsing(int h)
    {
        int Remaining = hrs - used;
        if (h > Remaining)
            cout << "Sorry!! you dont have enough hours to use" << endl;
        else
        {
            used = used + h;
            tused = tused + h;
        }
    }
    void MyAccount()
    {
        cout << "Acccount Details:" << endl;
        cout << "Account id:" << id << endl;
        cout << "Total hours rented:" << hrs << endl;
        cout << "Hours used:" << used << endl;
        cout << "Remaining hours:" << hrs - used << endl;
    }
};
int iBrowse::slno = 1;
int iBrowse::thrs = 500;
int iBrowse::tused = 0;

int main()
{
    iBrowse i1, i2;
    i1.Register();
    i2.Register();

    i1.Browsing(5);
    i2.Browsing(6);

    i1.MyAccount();
    i2.MyAccount();

    return 0;
}
