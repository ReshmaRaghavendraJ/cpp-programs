#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string email;
    cout << "Enter your email:" << endl;
    getline(cin, email);
    int n = email.find('@');
    string usrname = email.substr(0, n);
    // string provider = email.substr(n + 1, email.length() - (n + 1));
    string prov = email.substr(n + 1);
    cout << "User Name:" << usrname << endl
         << "Provider:" << prov << endl;
    return 0;
}
