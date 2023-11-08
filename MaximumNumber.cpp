// Question 4

#include <iostream>

using namespace std;

int main()
{
    // declare variable
    int firstNumber, secondNumber;

    cout << "Please enter first number" << endl;
    cin >> firstNumber;
    cout << "Please enter second number" << endl;
    cin >> secondNumber;

    /*
    The switch will return 1 if firstNumber is greater than secondNumber

    The switch will return 0 if secondNumber is greater than firstNumber
    */

    switch (firstNumber > secondNumber)
    {
    case 0:
        cout << "second number is the maximum number" << endl;
        break;
    case 1:
        cout << "first number is the maximum number" << endl;
        break;
    }
}