#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int main()
{
    char date[] = {"15-10-1995"};
    int d, m, y;
    sscanf(date, "%d-%d-%d", &d, &m, &y);
    cout << "Day=" << d << endl;
    cout << "Month=" << m << endl;
    cout << "Year=" << y << endl;
    return 0;
}
