#include <iostream>
#include <vector>
using namespace std;
class Student
{
private:
    int regno;
    char name[30];

public:
    void read()
    {
        cin >> regno;
        cin >> name;
    }
    friend ostream &operator<<(ostream &out, Student &arg)
    {
        out << arg.regno << "\t" << arg.name << endl;
        return out;
    }
};
int main()
{
    vector<Student> v;
    for (int i = 1; i <= 3; i++)
    {
        Student s;
        s.read();
        v.push_back(s);
    }
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;
    return 0;
}
