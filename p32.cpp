#include <iostream>
using namespace std;
int sum(int, int = 1);
int main()
{
    cout << sum(10) << endl;
    cout << sum(10, 20) << endl;
    return 0;
}
int sum(int n1, int n2)
{
    int s = 0;
    if (n2 == 1)
        for (int i = 1; i <= n1; i++)
            s = s + i;
    else
        for (int i = n1; i <= n2; i++)
            s = s + i;
    return s;}
