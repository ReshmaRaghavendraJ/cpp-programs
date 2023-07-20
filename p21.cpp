#include <iostream>
#include <mem.h>
using namespace std;
int main()
{
    char a[10];
    cout << "Enter a:" << endl;
    cin.getline(a, 10);
    cout << "Hi" << a << endl;
    return 0;
}
