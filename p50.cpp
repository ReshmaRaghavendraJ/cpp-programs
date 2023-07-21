#include <iostream>
#include <ctype.h>
using namespace std;
class Election
{
private:
    int voteid;
    char party;
    static int ac, bc, cc;

public:
    static void report()
    {
        cout << "Party-A " << ac << endl;
        cout << "Party-B " << bc << endl;
        cout << "Party-C " << cc << endl;
    }
    void vote()
    {
        cout << "Enter your voteid and party name:" << endl;
        cin >> voteid;
        cin >> party;
        party = tolower(party);
        if (party == 'a')
            ac++;
        else if (party == 'b')
            bc++;
        else if (party == 'c')
            cc++;
    }
    void myVote()
    {
        cout << voteid << endl
             << party << endl;
    }
};
int Election::ac = 0, Election::bc = 0, Election::cc = 0;
int main()
{
    Election e1, e2, e3, e4;
    e1.vote();
    e2.vote();
    e3.vote();
    e4.vote();
    e1.myVote();
    e2.myVote();
    e3.myVote();
    e4.myVote();
    Election::report();
    return 0;
}
