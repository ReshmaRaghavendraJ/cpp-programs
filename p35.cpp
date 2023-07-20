#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;
void countdown(int);
void countdown(int, int);
int main()
{
    countdown(20);
    // countdown(10, 3);
    return 0;
}
void countdown(int n)
{
    for (int i = n; i >= 0; i--)
    {
        cout << left << setw(3) << i << "\r";
        Sleep(1000);
    }
}
void countdown(int n, int sec)
{
    for (int i = n; i >= 0; i--)
    {
        cout << left << setw(3) << i << "\r";
        Sleep(sec * 1000);
    }
}
