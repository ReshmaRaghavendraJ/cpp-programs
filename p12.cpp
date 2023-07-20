#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    int x;
    srand(time(NULL));
    for (int i = 1; i <= 5; i++)
    {
        x = 65 + rand() % 26;
        cout << char(x);
    }

    return 0;
}
