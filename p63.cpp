#include <iostream>
#include <vector>
using namespace std;
class Club
{
private:
    vector<string> members;

public:
    void add()
    {
        cout << "Enter Member name:" << endl;
        string n;
        getline(cin, n);
        members.push_back(n);
    }
    int getCount()
    {
        return members.size();
    }
    string operator[](int indx)
    {
        return members[indx];
    }
};
int main()
{
    Club c;
    int ch;
    while (true)
    {
        cout << "1.Enter new membership:" << endl;
        cout << "2.List all members:" << endl;
        cout << "3.Exit" << endl;
        cout << "Enter your choice:" << endl;
        if (ch == 1)
            c.add();
        else if (ch == 2)
        {
            cout << "Members List(" << c.getCount() << ")" << endl;
            for (int i = 0; i <= c.getCount(); i++)
                cout << c[i] << endl;
        }
        else if (ch == 3)
            break;
    }
    return 0;
}
