/*Write a program that asks the user how many people participated in a survey. It then inputs the height of
each of the people and calculates the average height.*/

#include <iostream>
using namespace std;

int main()
{
    int numPeople;
    double height, totalHeight = 0, averageHeight;

    cout << "Welcome to the survey!" << endl;
    cout << "--------------------------------------" << endl;

    bool valid = false;

    while (!valid)
    {
        cout << "How many people participated in the survey? ";
        cin >> numPeople;

        if (numPeople > 0)
        {
            for (int i = 0; i < numPeople; i++)
            {
                cout << "Enter the height of person " << i + 1 << " in meters: ";
                cin >> height;
                totalHeight += height;
            }
            valid = true;
        }
        else
        {
            cout << "Invalid input. Please enter a number greater than 0." << endl;
        }
    }

    averageHeight = totalHeight / numPeople;
    cout << "The average height of the people surveyed is " << averageHeight << " meters." << endl;

    return 0;
}