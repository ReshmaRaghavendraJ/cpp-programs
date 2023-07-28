#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(50);
    v.push_back(100);
    v.push_back(20);
    v.push_back(80);
    while (true)
    {
        vector<int>::iterator i = find(v.begin(), v.end(), 20);
        if (i == v.end())
            break;
        v.erase(i);
    }
    vector<int>::iterator i;
    for (i = v.begin(); i != v.end(); i++)
        cout << *i << endl;
    return 0;
}
