#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;
int main()
{
    int x, guess;
    srand(time(NULL));
    x = rand() % 101;
    for (int i = 1; i <= 8; i++)
    {
        cout << "Enter your guess:" << endl;
        cin >> guess;
        if (guess == x)
        {
            cout << "You Won the Game" << endl;
            return 0;
        }
        if (i <= 7 && guess < x)
        {
            cout << "Try greater" << endl;
        }
        if (i <= 7 && guess > x)
        {
            cout << "Try lesser" << endl;
        }
    }
    cout << "Sorry!!Try next time.Correct number is" << x;
    return 0;
}
