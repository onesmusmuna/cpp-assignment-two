// Question 9

#include <iostream>

using namespace std;

int main()
{
    // declare variables
    int age, movieType;

    // prompt user for age
    cout << "Please enter your age: ";
    cin >> age;

    // prompt user for movie type
    cout << "Please select type of movie\n";
    cout << "Press 1 for Regular \n";
    cout << "Press 2 for 3D \n";
    cin >> movieType;

    // Check if age is less than 17 and movie type is 1
    if (age <= 17 && movieType == 1)
    {
        cout << "Under 18 - regular movie ticket -> 500";
    }
    // Check if age is less than 17 and movie type is 2
    else if (age <= 17 && movieType == 2)
    {
        cout << "Under 18 - 3D movie ticket -> 700";
    }
    // Check if age is 18 or more  and movie type is 1
    else if (age >= 18 && movieType == 1)
    {
        cout << "Over 18 - regular movie ticket -> 1000";
    }
    // Check if age is 18 or more and movie type is 2
    else if (age >= 18 && movieType == 2)
    {
        cout << "Over 18 - 3D movie ticket -> 1500";
    }
    else
    {
        cout << "\nInvalid input\n";
    }
    return 0;
}