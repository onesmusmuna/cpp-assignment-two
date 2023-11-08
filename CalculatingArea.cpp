// Question 5

#include <iostream>

using namespace std;

int main()
{
    // declare variable
    int selection, raduis, length, width, base, height;
    float area;

    // User to choose the operation they want to perform

    cout << "\n";
    cout << "Select 1 to calculate the are of a circle" << endl;
    cout << "Select 2 to calculate the are of a rectangle" << endl;
    cout << "Select 3 to calculate the are of a triangle" << endl;
    cout << "Select 0 to quit" << endl;
    cin >> selection;

    switch (selection)
    {
        // Here we Calaculate the area of the circle
    case 1:
        cout << "Please input the radius" << endl;
        cin >> raduis;

        area = 3.14 * raduis * raduis;
        cout << "The are of the Circle is: ";
        cout << area << endl;
        break;
        // Here we Calaculate the area of the Rectangle
    case 2:
        cout << "Please input the length of rectangle" << endl;
        cin >> length;
        cout << "Please input the width of rectangle" << endl;
        cin >> width;

        area = length * width;
        cout << "The are of the Rectangle is: ";
        cout << area << endl;
        break;
        // Here we Calaculate the area of the Triangle
    case 3:
        cout << "Please input the base of triangle" << endl;
        cin >> base;
        cout << "Please input the height of triangle" << endl;
        cin >> height;

        area = 0.5 * base * height;
        cout << "The are of the Triangle is: ";
        cout << area << endl;
        break;
        // User quits the program
    case 0:
        cout << "Bye bye" << endl;
        break;
        // When others fail, this will run
    default:
        cout << "Invalid input" << endl;
        break;
    }

    return 0;
}