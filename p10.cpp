#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int x;
    srand(time(NULL));
    x = rand();
    cout << x << endl;
    int y = x % 10;
    cout << y << endl;
    int z = x % 5;
    cout << z;
    return 0;
}
