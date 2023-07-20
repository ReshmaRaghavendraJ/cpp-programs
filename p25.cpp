#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
    int a = 10, b = 20;
    char result[30];
    sprintf(result, "Sum=%d", a + b);
    cout << result << endl;
    return 0;
}
