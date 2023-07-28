#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s = "KA09ER3849";
    string rep = s.replace(4, 2, "RR");
    cout << rep;
    return 0;
}
