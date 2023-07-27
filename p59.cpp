#include <iostream>
using namespace std;
class Robot
{
public:
    void operator++() // Pre Increment
    {
        cout << "Move and pick apple" << endl;
    }
    void operator++(int) // Post Increment
    {
        cout << "Pick and Move Apple" << endl;
    }
};
int main()
{
    Robot r;
    ++r; // Pre Increment
    r++; // Post Increment
    return 0;
}
