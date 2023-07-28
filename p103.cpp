#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s = "World Healoth Organizatoion";
    while (true)
    {
        int n = s.find('o');
        if (n == -1)
            break;
        s.erase(n, 1);
    }
    cout << s;
    return 0;
}
