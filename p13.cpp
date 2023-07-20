#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    int x;
    srand(time(NULL));
    for (int i = 1; i <= 6; i++)
    {
        if (rand() % 2 == 0)
        {
            x = rand() % 10;
            cout << x;
        }
        else
        {
            x = 65 + rand() % 26;
            cout << char(x);
        }
    }
    return 0;}
