#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    int x;
    srand(time(NULL));
    x = 65 + rand() % 26;
    cout << x << endl;
    cout << char(x);
    return 0;
}
