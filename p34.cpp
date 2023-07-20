#include <iostream>
using namespace std;
char convert(int);
int convert(char);
int main()
{
    char ch;
    int num;
    cout << "Enter number" << endl;
    cin >> num;
    cout << convert(65) << endl;
    cout << "Enter character" << endl;
    cin >> ch;
    cout << convert('B') << endl;
    return 0;
}
char convert(int num)
{
    return char(num);
}
int convert(char ch)
{
    return int(ch);
}
