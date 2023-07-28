#include <iostream>
using namespace std;
class Student
{
private:
    int regno;
    char name[30];

public:
    void read()
    {
        cout << "Enter name and regno:" << endl;
        cin >> regno;
        cin.ignore();
        cin.getline(name, 30);
    }
    operator int()
    {
        return regno;
    }
};
int main()
{
    Student s;
    s.read();
    int idno = s;
    cout << idno << endl;
    return 0;
}
