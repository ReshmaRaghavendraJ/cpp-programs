#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string pwd;
    cout << "Enter password:" << endl;
    cin >> pwd;
    if (pwd == "a123*")
        cout << "Valid" << endl;
    else
        cout << "Invalid" << endl;
    return 0;
}
