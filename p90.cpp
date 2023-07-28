#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
    set<int> s1, s2, s3;
    s1.insert(10);
    s1.insert(20);
    s1.insert(50);
    s1.insert(70);
    s1.insert(5);
    s2.insert(63);
    s2.insert(52);
    s2.insert(10);
    s2.insert(20);
    set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), std::inserter(s3, s3.begin()));
    set<int>::iterator i;
    for (i = s3.begin(); i != s3.end(); i++)
        cout << *i << "\t";
    return 0;
}
