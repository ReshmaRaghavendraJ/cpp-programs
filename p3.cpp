#include <iostream>
using namespace std;
int main()
{
    int ps;
    float amount = 45.89;
    ps = ((amount - int(amount)) * 100);
    cout << "Only Paisa is:" << ps;
    return 0;
}
