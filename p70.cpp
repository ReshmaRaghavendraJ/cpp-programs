#include <iostream>
using namespace std;
class A
{
private:
    int x;

public:
    int y;

protected:
    int z;
};
class B
{
private:
    int p;
};
class C : public A, public B
{
private:
    int a;

public:
    int b;

protected:
    int c;
};
int main()
{
    C c;
    cout << sizeof(c);
    return 0;
}
