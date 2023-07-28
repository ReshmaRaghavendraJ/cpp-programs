#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    s = "Information Science";
    string r = s.substr(2, 10);
    cout << r;
    return 0;
}
