#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;
int main()
{
    int num;
    cout << "Enter number:" << endl;
    cin >> num;
    for (int i = num; i >= 0; i--)
    {
        cout << setw(3) << left << i << "\r";
        Sleep(1000);
    }
    return 0;
}
