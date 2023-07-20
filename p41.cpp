#include <iostream>
using namespace std;
class Time
{
private:
    int h, m, s;

public:
    void set(int hr, int min, int sec)
    {
        h = hr;
        m = min;
        s = sec;
    }
    void greetings()
    {
        if (h < 12)
            cout << "Good Morning" << endl;
        else if (h < 16)
            cout << "Good Afternoon" << endl;
        else
            cout << "Good Evening" << endl;
    }
};
int main()
{
    Time t1, t2;
    t1.set(10, 45, 60);
    t2.set(19, 23, 6);
    t1.greetings();
    t2.greetings();
    return 0;
}
