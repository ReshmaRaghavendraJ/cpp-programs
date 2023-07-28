#include <iostream>
using namespace std;
template <class T>
class Student
{
private:
    int regno;
    char name[20];
    T grade;

public:
    void read()
    {
        cout << "Enter Details:" << endl;
        cin >> regno >> name >> grade;
    }
    void write()
    {
        cout << "-------------------" << endl;
        cout << "regno:" << regno << endl;
        cout << "name:" << name << endl;
        cout << "grade:" << grade << endl;
    }
};
int main()
{
    Student<int> s1;
    Student<char> s2;
    s1.read();
    s2.read();
    s1.write();
    s2.write();
    return 0;
}
