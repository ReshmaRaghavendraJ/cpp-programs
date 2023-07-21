#include <iostream>
using namespace std;
class Family
{
private:
    int age, salary;
    char name[30];
    void readSalary()
    {
        cout << "Enter Salary:" << endl;
        cin >> salary;
    }

public:
    void readDetails()
    {
        cout << "Enter Name and Age:" << endl;
        cin >> name >> age;
        if (age >= 21)
            readSalary();
        else
            salary = 0;
    }
    int getsalary()
    {
        return salary;
    }
    void printDetails()
    {
        cout << name << "\t"
             << age << "\t" << salary << endl;
    }
};
int main()
{
    int n;
    cout << "Enter number of members in your family:" << endl;
    cin >> n;
    Family f[n];
    cout << "Enter Details:" << endl;
    for (int i = 0; i < n; i++)
        f[i].readDetails();
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        f[i].printDetails();
        s = s + f[i].getsalary();
    }
    cout << "Total Salary"
         << "\t" << s << endl;
    return 0;
}
