#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string fname, lname, name;
    cout << "Enter fname and lname:" << endl;
    cin >> fname >> lname;
    name = fname + lname;
    cout << name << endl;
    return 0;
}
