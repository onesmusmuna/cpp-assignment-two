// Question 6

#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main()
{
    // declare and assign variable
    int lightStatus = 0;

    /*
    0 - Red    -> Stop
    1 - Green  -> GO
    2 - Yellow -> Prepare to Stop.
    */

    while (true)
    {
        switch (lightStatus)
        {
        case 0:
            cout << "Red light -> Stop" << endl;

            // Light to be Red for 5 seconds
            this_thread::sleep_for(chrono::seconds(5));

            // Change light to Green.
            lightStatus = 1;
            break;

        case 1:
            cout << "Green light -> Go" << endl;
            // Light to Green for 5 seconds
            this_thread::sleep_for(chrono::seconds(5));

            // Change light to Yellow.
            lightStatus = 2;
            break;

        case 2:
            cout << "Yellow light -> Prepare to Stop" << endl;

            // Light to be Yello for 2 seconds
            this_thread::sleep_for(chrono::seconds(2));

            // Change light to Red.
            lightStatus = 0;
            break;
        }
    }
}