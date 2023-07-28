#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.insert(v.begin() + 2, 25);
    vector<int>::iterator i;
    for (i = v.begin(); i != v.end(); i++)
    {
        cout << *i << endl;
    }
    return 0;
}
