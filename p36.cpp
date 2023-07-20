#include <iostream>
using namespace std;
void swap(int &, int &);
void swap(float &, float &);
void swap(char &, char &);
int main()
{
    int n1, n2;
    float f1, f2;
    char c1, c2;
    cout << "Enter int numbers:" << endl;
    cin >> n1 >> n2;
    cout << "Enter float numbers:" << endl;
    cin >> f1 >> f2;
    cout << "Enter character:" << endl;
    cin >> c1 >> c2;
    swap(n1, n2);
    swap(f1, f2);
    swap(c1, c2);
    cout << "After Swapping:" << endl;
    cout << n1 << endl
         << n2 << endl
         << f1 << endl
         << f2 << endl
         << c1 << endl
         << c2;
    return 0;
}
void swap(int &i1, int &i2)
{
    int temp;
    temp = i1;
    i1 = i2;
    i2 = temp;
}
void swap(float &d1, float &d2)
{
    float temp;
    temp = d1;
    d1 = d2;
    d2 = temp;
}
void swap(char &l1, char &l2)
{
    char temp;
    temp = l1;
    l1 = l2;
    l2 = temp;
}