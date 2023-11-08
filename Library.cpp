// Question 7

#include <iostream>

using namespace std;

int main()
{
    int fee, numOfDays, typeOfBook;

    cout << "\n";
    cout << "Enter the duration you have been late to return the book in Days: " << endl;
    cin >> numOfDays;

    cout << "Choose type of book: " << endl;
    cout << "1. Childrens book" << endl;
    cout << "2. Other Book" << endl;
    cin >> typeOfBook;

    /*
    Book late by less than 7 days - Childrens ksh 10, Reference and Regular Ksh 20.
    Book late by less than 28 days - Childrens ksh 50, Reference and Regular ksh 100.
    Book late by less than 6 months (182 days) - Childrens ksh 200, Reference and Regular ksh 600.
    Book late by less than 12 months (365 days) - Childrens ksh 300, Reference and Regular ksh 1000
    Book late by more than 1 year - Childrens ksh 500, Reference and Regular ksh 4000

    */

    if (numOfDays <= 7)
    {
        if (typeOfBook == 1)
        {
            cout << "Library fee for children book -> KSH 10 \n";
            return 0;
        }
        else if (typeOfBook == 2)
        {
            cout << "Library fee for other books -> KSH 20 \n";
            return 0;
        }
        else
        {
            cout << "Invalid book. choose either 1 OR 2 \n";
            return 0;
        }
    }
    if (numOfDays >= 8 && numOfDays <= 28)
    {
        if (typeOfBook == 1)
        {
            cout << "Library fee for children book -> KSH 50 \n";
        }
        else if (typeOfBook == 2)
        {
            cout << "Library fee for other books -> KSH 100 \n";
        }
        else
        {
            cout << "Invalid book. choose either 1 OR 2 \n";
        }
    }
    if (numOfDays >= 29 && numOfDays <= 182)
    {
        if (typeOfBook == 1)
        {
            cout << "Library fee for children book -> KSH 200 \n";
        }
        else if (typeOfBook == 2)
        {
            cout << "Library fee for other books -> KSH 600 \n";
        }
        else
        {
            cout << "Invalid book. choose either 1 OR 2 \n";
        }
    }
    if (numOfDays >= 183 && numOfDays <= 365)
    {
        if (typeOfBook == 1)
        {
            cout << "Library fee for children book -> KSH 300 \n";
        }
        else if (typeOfBook == 2)
        {
            cout << "Library fee for other books -> KSH 1000 \n";
        }
        else
        {
            cout << "Invalid book. choose either 1 OR 2 \n";
        }
    }
    if (numOfDays >= 366)
    {
        if (typeOfBook == 1)
        {
            cout << "Library fee for children book -> KSH 500 \n";
        }
        else if (typeOfBook == 2)
        {
            cout << "Library fee for other books -> KSH 4000 \n";
        }
        else
        {
            cout << "Invalid book. choose either 1 OR 2 \n";
        }
    }
}