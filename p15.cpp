#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;
int main()
{
    int x;
    srand(time(NULL));
    for (int i = 1; i <= 16; i++)
    {
        x = rand() % 10;
        cout << x;
        if (i == 4 || i == 8 || i == 12)
            cout << "-";
    }
    return 0;
}
