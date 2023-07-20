#include <iostream>
using namespace std;
int main()
{
    int a[] = {10, 85, 99, 74, 26, 54, 36, 10, 555};
    int n = sizeof(a) / sizeof(int);
    if (n % 2 != 0)
    {
        cout << "Cant make a pair" << endl;
        return 0;
    }
    else
    {
        for (int i = 0; i < n; i = i + 2)
            cout << "(" << a[i] << "," << a[i + 1]
                 << ")"
                 << "\t";
    }
    return 0;
}
