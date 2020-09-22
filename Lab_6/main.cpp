#include <iomanip>
#include <iostream>
using namespace std;
#include "Distance.h"

int main()
{
    //user inputs mm to convert to Distance
    int input;
    cout << "Please enter a distance in millimeters: ";
    cin >> input;
    Distance One(input);
    cout << "Please enter another distance in millimeters: ";
    cin >> input;
    Distance Two(input);

    //Print details of Distance One and Two inputted by user
    cout << "\nThe details for the first distance:\n";
    One.PrintDistance();
    cout << "The details for the second distance:\n";
    Two.PrintDistance();

    //blank Distance variable
    Distance New(0);
    //sum of One and Two Distance stored as New
    New = One+Two;
    cout << "\nThe details for One+Two:\n";
    New.PrintDistance();

    //Find One-Two
    float result = One-Two;
    cout << "\nOne-Two is: " << std::fixed << setprecision(3) << result << " meters.\n";

    //Find which distance is greater, or if equal
    if(One>Two)
    {
        cout << "Distance One is greater than Distance Two.\n";
    }
    else if(Two>One)
    {
        cout << "Distance Two is greater than Distance One.\n";
    }
    else
    {
        cout << "The two distances are equal in length.\n";
    }

    //add amount of cm to Distance
    cout << "\nEnter the amount of centimeters to add to the distances: ";
    cin >> input;

    //Adding cm to Distance and printing new Distance
    One.AddCenti(input);
    cout << "The first distance:\n";
    One.PrintDistance();
    Two.AddCenti(input);
    cout << "The second distance:\n";
    Two.PrintDistance();

    return 0;
}
