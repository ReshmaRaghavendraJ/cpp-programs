#include <iostream>
using namespace std;
class Scores
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
    Scores s1, s2;
    s1 = 55;
    s2 = 200;
    cout << "The value of s1 is:" << s1 << endl;
    cout << "The value of s2 is:" << s2 << endl;

    return 0;
}
