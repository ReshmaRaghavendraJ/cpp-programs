#include <iostream>
using namespace std;
float result(int, int);
float result(int, int, int);
int main()
{
    int t1, t2, t3, ch;
    cout << "1.Student attended 2 internals" << endl;
    cout << "2.Student attended 3 internals" << endl;
    cout << "Enter your choice:" << endl;
    cin >> ch;
    if (ch == 1)
    {
        cout << "Enter t1 and t2:" << endl;
        cin >> t1 >> t2;
        cout << "average=" << result(t1, t2) << endl;
    }
    else if (ch == 2)
    {
        cout << "Enter t1 and t2 aand t3:" << endl;
        cin >> t1 >> t2 >> t3;
        cout << "average=" << result(t1, t2, t3) << endl;
    }
    return 0;
}
float result(int t1, int t2)
{
    return (t1 + t2) / 2.0;
}
float result(int t1, int t2, int t3)
{
    float avg;
    if (t1 < t2 && t1 < t3)
        return (t2 + t3) / 2.0;
    else if (t2 < t1 && t2 < t3)
        return (t1 + t3) / 2.0;
    else
        return (t2 + t1) / 2.0;}
