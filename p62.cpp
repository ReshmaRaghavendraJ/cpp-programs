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
    c.add();
    c.add();
    c.add();
    c.add();
    for (int i = 0; i <= c.getCount(); i++)
        cout << c[i] << endl;
    return 0;
}
