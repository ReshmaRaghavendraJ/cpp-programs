#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    int n, high = 0, low = 0;
    cout << "Enter size n:" << endl;
    cin >> n;
    int a[n];
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
        cout << a[i] << endl;
        if (a[i] >= 80)
            high++;
        else if ((a[i] < 35))
            low++;
    }
    cout << "List is as follows:" << endl;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 80)
            cout << " {" << a[i] << "} ";
        else if ((a[i] < 35))
            cout << " [" << a[i] << "] ";
    }
    cout << "high=" << high << endl;
    cout << "low=" << low << endl;
    return 0;
}
