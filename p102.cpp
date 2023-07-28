#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "RagHU";
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s << endl;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s;
    return 0;
}
