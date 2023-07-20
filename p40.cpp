#include <iostream>
#include <string.h>
using namespace std;
class Student
{
private:
    int regno, standard;
    char name[20];

public:
    void setDetails(int reg_no, char fname[20], int stand)
    {
        regno = reg_no;
        strcpy(name, fname);
        standard = stand;
    }
    void aboutExam()
    {
        if (standard == 10)
            cout << "Hi" << name << ", U have to write Board Exam" << endl;
        else
            cout << "Hi" << name << ", U dont have to write Board Exam" << endl;
    }
};
int main()
{
    Student s1, s2;
    s1.setDetails(53, "Raghavendra", 5);
    s2.setDetails(56, "Reshma", 10);
    s1.aboutExam();
    s2.aboutExam();
    return 0;
}
