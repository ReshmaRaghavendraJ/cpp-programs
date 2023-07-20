#include <iostream>
#include <mem.h>
using namespace std;
int main()
{
    int a[] = {12, 3, 56, 8, 96, 7, 41};
    int n = sizeof(a) / sizeof(int);
    int b[n];
    memcpy(b, a, sizeof(a));
    for (int i = 0; i < n; i++)
        cout << b[i] << "\t";
    return 0;
}
