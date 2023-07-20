#include <iostream>
using namespace std;
void table(int, int = 10);
int main()
{
    table(3);
    table(5, 15);
    return 0;
}
void table(int a, int b)
{
    cout << "Multiplication table is:" << endl;
    for (int i = 1; i <= b; i++)
        cout << a << "*" << i << "=" << a * i << endl;
}
