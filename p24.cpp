#include <iostream>
#include <string.h>
#include <windows.h>
#include <stdio.h>
using namespace std;
int main()
{
    char name[] = {"welcome to mysore zoo"};
    while (true)
    {
        sprintf(name, "%s%c", &name[1], name[0]);
        cout << name << "\r";
        Sleep(100);
    }
    return 0;
}
