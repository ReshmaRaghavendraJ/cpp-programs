#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s = "Computer Science";
    int p = s.find("pu");
    int q = s.find("e");
    int q1 = s.find("e", q + 1);
    cout << "p=" << p << "\t"
         << "q=" << q << "\t"
         << "q1=" << q1 << "\t";
    return 0;
}
