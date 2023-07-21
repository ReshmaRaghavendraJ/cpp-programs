#include <iostream>
using namespace std;
class Candidate
{
private:
    int appno, exp;
    char name[20];

public:
    void read()
    {
        cout << "Enter application number and name and experience:" << endl;
        cin >> appno >> name >> exp;
    }
    friend void jobConsultant(Candidate, Candidate);
};
void jobConsultant(Candidate arg1, Candidate arg2)
{
    if (arg1.exp == arg2.exp)
        cout << "Both have same experience.So both got Job" << endl;
    else if (arg1.exp > arg2.exp)
        cout << "congrats " << arg1.name << "Selected and got job" << endl;
    else
        cout << "congrats " << arg2.name << "Selected and got job" << endl;
}
int main()
{
    Candidate c1, c2;
    c1.read();
    c2.read();
    jobConsultant(c1, c2);
    return 0;
}
