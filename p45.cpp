#include <iostream>
using namespace std;
class Poll
{
    string val;
    int y = 0, n = 0;

public:
    void setPoll(string msg)
    {
        val = msg;
    }
    void vote(int v)
    {
        if (v == 1)
            y++;
        if (v == 2)
            n++;
    }
    void yesCount()
    {
        cout << "Yes Count is:" << y << endl;
    }
    void noCount()
    {
        cout << "No Count is:" << n << endl;
    }
};
int main()
{
    Poll p;
    p.setPoll("Party-1 will win this election");
    int v;
    for (int i = 1; i <= 3; i++)
    {
        cout << "Enter (1) for yes (2) for no";
        cin >> v;
        p.vote(v);
    }
    p.yesCount();
    p.noCount();
    return 0;
}
