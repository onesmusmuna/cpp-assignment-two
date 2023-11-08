// Question 2

#include <iostream>

using namespace std;

int main()
{
    // declare variables
    string fullName, course;
    int score;

    cout << "Please enter your full name: ";
    getline(cin, fullName);

    cout << "Please enter your course: ";
    getline(cin, course);

    cout << "Please enter your score: ";
    cin >> score;

    if (score >= 70 && score <= 100)
    {
        cout << fullName << " your grade is => A";
    }
    else if (score >= 60 && score <= 69)
    {
        cout << fullName << " your grade is => B";
    }
    else if (score >= 50 && score <= 59)
    {
        cout << fullName << " your grade is => C";
    }
    else if (score >= 40 && score <= 49)
    {
        cout << fullName << " your grade is => D";
    }
    else if (score < 40)
    {
        cout << fullName << " your grade is => F";
    }
    else
    {
        cout << "Invalid score";
    }

    return 0;
}