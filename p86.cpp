#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(10);
    s.push(50);
    s.push(63);
    s.push(80);
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}
