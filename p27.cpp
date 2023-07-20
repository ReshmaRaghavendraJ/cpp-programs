#include <iostream>
using namespace std;
void swap(int &, int &);
int main()
{
    int a, b, c;
    cout << "Enter a and b values:" << endl;
    cin >> a >> b;
    swap(a, b);
    cout << "After Swapping:" << endl;
    cout << a << endl
         << b;
    return 0;
}
void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
