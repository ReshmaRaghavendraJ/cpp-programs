#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
int main()
{
    stack<int> s;
    int n;
    cout << "Enter Number:" << endl;
    cin >> n;
    while (n != 0)
    {
        int rem = n % 2;
        s.push(rem);
        n = n / 2;
    }
    cout << "Binary value=" << endl;
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}
