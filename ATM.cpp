// Question 10

#include <iostream>

using namespace std;

int main()
{
    // declare variables
    int accountBalance, transactionLimit, transactAmount;

    // Assign transaction limit of 40,000
    transactionLimit = 40000;

    // propmt user for their account balance
    cout << "Please enter your Account Balance: ";
    cin >> accountBalance;

    // prompt user for amount they would like to withdraw
    cout << "Please enter amount you want to withdraw: ";
    cin >> transactAmount;

    // Check if funds are sufficient
    if (transactAmount >= accountBalance)
    {
        cout << "Sorry! You have insufficient funds in your account" << endl;
    }
    // Check if transaction amount is exceeded
    else if (transactAmount > 40000)
    {
        cout << "Sorry! your transaction limit has been exceeded. Try an amoutn less than 40,000" << endl;
    }
    // Successful code runs here
    else if (transactAmount < 40000)
    {
        cout << "Dear Customer, you have withdrawn KSH ";
        cout << transactAmount;
    }
    else
    {
        cout << "Invalid input";
    }

    return 0;
}