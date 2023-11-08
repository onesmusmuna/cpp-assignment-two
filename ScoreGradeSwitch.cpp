// Question 3

#include <iostream>

using namespace std;

int main()
{
    // declare variables
    string fullName, course;
    int score;

    // prompt user for name
    cout << "Please enter your full name: ";
    getline(cin, fullName);

    // prompt user for course
    cout << "Please enter your course: ";
    getline(cin, course);

    // prompt user for grade
    cout << "Please enter your score: ";
    cin >> score;

    // Here we will use the range to output the correct Grade
    switch (score)
    {
    case 70 ... 100:
        cout << fullName << " your grade is => A\n";
        break;
    case 60 ... 69:
        cout << fullName << " your grade is => B\n";
        break;
    case 50 ... 59:
        cout << fullName << " your grade is => C\n";
        break;
    case 40 ... 49:
        cout << fullName << " your grade is => D\n";
        break;
    case 0 ... 39:
        cout << fullName << " your grade is => F\n";
        break;

    default:
        cout << "Invalid score";
        break;
    }

    return 0;
}