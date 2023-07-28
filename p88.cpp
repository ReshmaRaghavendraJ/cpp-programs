#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
int main()
{
    char expr[20];
    cout << "Enter Expressions:" << endl;
    cin.getline(expr, 20);
    stack<char> s;
    for (int i = 0; expr[i] != '\0'; i++)
        if (expr[i] == '(')
            s.push(expr[i]);
    if (expr[i] == ')')
    {
        if (s.empty())
        {
            cout << "Invalid Expression" << endl;
            return 0;
        }
        else
            s.pop();
    }
    if (s.empty())
        cout << "Valid Expression" << endl;
    else
        cout << "Invalid Expression" << endl;
    return 0;
}
