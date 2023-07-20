#include <iostream>
#include <mem.h>
using namespace std;
int main()
{
    char a[80];
    cout << "Enter a:" << endl;
    cin.getline(a, 80, '.');
    cout << "Hi" << a << endl;
    return 0;
}
