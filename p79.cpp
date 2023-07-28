#include <iostream>
using namespace std;
class A
{
public:
    virtual void camera()
    {
        cout << "Basic Camera" << endl;
    }
};
class B : public A
{
public:
    void camera()
    {
        cout << "Advanced Feature" << endl;
    }
};
int main()
{
    A *ptr;
    ptr = new B;
    ptr->camera();
    ptr = new A;
    ptr->camera();
    return 0;
}
