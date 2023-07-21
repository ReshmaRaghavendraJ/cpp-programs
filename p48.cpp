#include <iostream>
using namespace std;
class Student
{
private:
    int mathsmarks;
    int sciencemarks;
    char name[30];
    int min;

public:
    void studDetails()
    {
        cout << "Enter Student Name:" << endl;
        cin >> name;
    }
    void internlDetails()
    {
        cout << "Enter mathsmarks and sciencemarks" << endl;
        cin >> mathsmarks >> sciencemarks;
    }
    void Minmarks()
    {
        min = mathsmarks + sciencemarks;
        if (min >= 25)
            cout << "Student can attend Exam" << endl;
        else
            cout << "Student did not get minimum marks.Sorry student cant atend Exam!!! ";
    }
    int getdisplay()
    {
        Return min;
    }
};
int main()
{
    Student s1, s2;
    int n;
    cout << "Enter Number of students:" << endl;
    cin >> n;
    Student s[n];
    for (int i = 0; i < n; i++)
    {
        s[i].studDetails();
        s[i].internlDetails();
        s[i].Minmarks();
        cout << "Student Info of minimum criteria for Exam is:" << s[i].getdisplay();
    }
    return 0;
}
