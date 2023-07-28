#include <iostream>
using namespace std;
class Winxp
{
public:
    void calc()
    {
        cout << "Calculator" << endl;
    }
    void officetool()
    {
        cout << "Office tools are used" << endl;
    }
};
class Winvista : public Winxp
{
public:
    void Security()
    {
        cout << "Security is available" << endl;
    }
    void Internet()
    {
        cout << "Internet is used" << endl;
    }
};
class Windows7 : public Winvista
{
public:
    void performance()
    {
        cout << "Performance is improved" << endl;
    }
    void Graphics()
    {
        cout << "New GRaphics are invented here" << endl;
    }
};
int main()
{
    Windows7 w;
    w.calc();
    w.Graphics();
    w.Internet();
    w.officetool();
    w.performance();
    w.Security();
    return 0;
}
