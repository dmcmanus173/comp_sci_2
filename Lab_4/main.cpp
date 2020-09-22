#include <iostream>
#include <iomanip>
#include "staffID.h"
using namespace std;

int main()
{
    int ID_number;
    char Member;
    float rating;

    //Entering details of first lecturer
    cout << "Please enter the details of the first Staff ID:\n  ID Number: ";
    cin >> ID_number;
    cout << "  Member of a union: ";
    cin >> Member;
    cout << "  Teaching Rating (0.0-5.0): ";
    cin >> rating;
    cout << "\n";
    //Creating new variable with entered parameters
    Lecturer Lecturer_One(ID_number, Member, rating);

    //Entering details of second lecturer
    cout << "Please enter the details of the second Staff ID:\n  ID Number: ";
    cin >> ID_number;
    cout << "  Member of a union: ";
    cin >> Member;
    cout << "  Teaching Rating (0.0-5.0): ";
    cin >> rating;
    cout << "\n";
    //Creating new variable with entered parameters
    Lecturer Lecturer_Two(ID_number, Member, rating);
    //print lecturer one details in parts
    cout << "Details regarding Lecturer One:\n";
    cout << "  Staff ID is: " << Lecturer_One.get_Staff_ID();
    cout << "\n  Union Membership: " << Lecturer_One.get_union_membership();
    cout << "\n  Teaching Rating is: " << setprecision(2) << Lecturer_One.get_Teaching_rating() << "\n\n";

    //print lecturer two details using print function
    cout << "Details regarding Lecturer Two:\n";
    Lecturer_Two.info_lecturer();

    //find combined lecturer and print details
    Lecturer_Two.combined(Lecturer_One);
    cout << "Details regarding Lecturer One and Two combined:\n";
    Lecturer_Two.info_lecturer();

    return 0;
}
