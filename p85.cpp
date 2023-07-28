#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<bool> v;
    v.push_back(true);
    v.push_back(false);
    v.push_back(false);
    v.push_back(false);
    v.flip();
    (OR) v[2] = !v[2];
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;
    return 0;
}
