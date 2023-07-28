#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string>
using namespace std;
int main()
{
    string s = "You Can You Will";
    while (!kbhit())
    {
        string s1 = s.substr(0, 1);
        string s2 = s.substr(1);
        s = s2 + s1;
        cout << s << "\r";
        Sleep(150);
    }
    return 0;
}
