#include <iostream>
using namespace std;
void display(int, int, int, char = '/');
int main()
{
    display(6, 8, 1996);
    display(02, 10, 2022, '-');
    return 0;
}
void display(int d, int m, int y, char ch)
{
    cout << d << ch << m << ch << y << endl;
}
