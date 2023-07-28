#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
    set<int> s1, s2, s3, s4, s5;
    s1.insert(3);
    s1.insert(6);
    s1.insert(9);
    s1.insert(11);
    s1.insert(14);

    s2.insert(14);
    s2.insert(3);
    s2.insert(7);
    s2.insert(8);
    s2.insert(23);
    // set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), std::inserter(s3, s3.begin()));
    set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), std::inserter(s3, s3.begin()));
    set_difference(s2.begin(), s2.end(), s1.begin(), s1.end(), std::inserter(s4, s4.begin()));
    set_union(s3.begin(), s3.end(), s4.begin(), s4.end(), std::inserter(s5, s5.begin()));
    set<int>::iterator i;
    for (i = s3.begin(); i != s3.end(); i++)
        cout << *i << endl;
    for (i = s4.begin(); i != s4.end(); i++)
        cout << *i << endl;
    for (i = s5.begin(); i != s5.end(); i++)
        cout << *i << "\t";
    return 0;
}
