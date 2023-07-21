#include <iostream>
using namespace std;
class Time;
class Date
{
private:
    int d, m, y;

public:
    void read()
    {
        cout << "Enter date,month,year:" << endl;
        cin >> d >> m >> y;
    }
    friend void DateTime(Date, Time);
};
class Time
{
private:
    int h, m, s;

public:
    void read()
    {
        cout << "Enter hour,minutes,seconds" << endl;
        cin >> h >> m >> s;
    }
    friend void DateTime(Date, Time);
};
void DateTime(Date obj1, Time obj2)
{
    cout << obj1.d << "-" << obj1.m << "-" << obj1.y << endl;
    cout << obj2.h << ":" << obj2.m << ":" << obj2.s << endl;
}
int main()
{
    Date d;
    Time t;
    d.read();
    t.read();
    DateTime(d, t);
    return 0;
}
