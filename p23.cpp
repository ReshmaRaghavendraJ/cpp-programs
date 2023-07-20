#include <iostream>
using namespace std;
int main()
{
    char name[30];
    cout << "Enter name:" << endl;
    cin >> name;
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == 122 || name[i] == 90)
            name[i] = name[i] - 25;
        else
            name[i] = name[i] + 1;
    }
    cout << name;
    return 0;
}
