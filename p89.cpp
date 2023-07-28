#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
    set<int> s1;
    s1.insert(10);
    s1.insert(20);
    s1.insert(56);
    s1.insert(47);
    s1.insert(96);
    s1.insert(10);
    set<int>::iterator i;
    for (i = s1.begin(); i != s1.end(); i++)
        cout << *i << "\t";
    return 0;
}
