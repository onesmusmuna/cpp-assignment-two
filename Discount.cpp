// Question 8

#include <iostream>

using namespace std;

int main()
{
    // declare variables
    int item1, item2, item3, discount, total, totalAfterDiscount;

    // prompt user for the price of first item
    cout << "Price of first item: ";
    cin >> item1;
    // prompt user for the price of second item
    cout << "Price of second item: ";
    cin >> item2;
    // prompt user for the price of third item
    cout << "Price of third item: ";
    cin >> item3;

    // prompt user to choose the discount they would like to apply
    cout << "\n";
    cout << "press 1 to apply 10% discount" << endl;
    cout << "press 2 to apply 20% discount" << endl;
    cout << "press 3 to apply 30% discount" << endl;
    cout << "press 4 to apply 40% discount" << endl;
    cout << "press 5 to apply 50% discount" << endl;
    cin >> discount;

    // Add the totals of items before discount
    total = item1 + item2 + item3;

    // get discount of 10%
    if (discount == 1)
    {
        totalAfterDiscount = 0.9 * total;
        cout << "Price after 10% discount is: ";
        cout << totalAfterDiscount;
    }
    // get discount of 20%
    else if (discount == 2)
    {
        totalAfterDiscount = 0.8 * total;
        cout << "Price after 20% discount is: ";
        cout << totalAfterDiscount;
    }
    // get discount of 30%
    else if (discount == 3)
    {
        totalAfterDiscount = 0.7 * total;
        cout << "Price after 30% discount is: ";
        cout << totalAfterDiscount;
    }
    // get discount of 40%
    else if (discount == 4)
    {
        totalAfterDiscount = 0.6 * total;
        cout << "Price after 40% discount is: ";
        cout << totalAfterDiscount;
    }
    // get discount of 50%
    else if (discount == 5)
    {
        totalAfterDiscount = 0.5 * total;
        cout << "Price after 50% discount is: ";
        cout << totalAfterDiscount;
    }
    else
    {
        cout << "Invalid input";
    }

    return 0;
}