#include <iostream>
using namespace std;
class Number
{
private:
    int data;

public:
    void operator=(int v)
    {
        data = v;
    }
    operator int()
    {
        return data;
    }
};
int main()
{
    Number a, b, c;
    a = 10;
    b = 20;
    c = a + b;
    cout << c;
    return 0;
}
