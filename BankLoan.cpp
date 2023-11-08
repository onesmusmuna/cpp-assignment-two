// Question 1

#include <iostream>

using namespace std;

int main()
{
    // declare variables
    int userAge, bankBalance, bankAge;
    string crb, userName;

    // prompt user for their name
    cout << "Please enter your name: " << endl;
    getline(cin, userName);

    // prompt user for thier age
    cout << "Please enter your age: " << endl;
    cin >> userAge;

    // check if age is above 22 years
    if (userAge > 22)
    {
        cout << "Please enter your Bank Balance: " << endl;
        cin >> bankBalance;

        // check if balance is above 50,000
        if (bankBalance > 50000)
        {
            cout << "Please enter your CRB status => good OR bad: " << endl;
            cin >> crb;

            // Check status of CRB.
            if (crb == "good")
            {
                cout << "Please enter Age account in months: " << endl;
                cin >> bankAge;

                // Check the bank account age
                if (bankAge > 6)
                {
                    // Congratulate the user for they are qualified to get a loan.
                    cout << "congratulations, " << userName << endl;
                    cout << "you are qualified for the loan";
                }
                else
                {
                    // inform user their that they need to have an account for more than 6 months to qualify.
                    cout << "Sorry, your bank age is not more than 6";
                }
            }
            else
            {
                // inform user their CRB is bad, that they dont qualify for a loan.
                cout << "Your CRB is not good, so you dont qualify for a loan";
            }
        }
        else
        {
            // inform user their bank balance is low.
            cout << "Bank Balance Low";
        }
    }
    else
    {
        // inform user their age is invalid.
        cout << "Age not valid " << endl;
    }

    return 0;
}