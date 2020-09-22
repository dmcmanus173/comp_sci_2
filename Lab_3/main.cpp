#include <iostream>
#include "staffID.h"
using namespace std;

int main()
{
    int ID_number;
    char Member;
    float rating;
    lecturer Lecturer_One, Lecturer_Two, combined_lec;

    //Entering details of first lecturer
    cout << "Please enter the details of the first Staff ID:\n  ID Number: ";
    cin >> ID_number;
    cout << "  Member of a union: ";
    cin >> Member;
    cout << "  Teaching Rating (0.0-5.0): ";
    cin >> rating;
    cout << "\n";
    Lecturer_One = create_lecturer(ID_number, Member, rating);

    //Entering details of second lecturer
    cout << "Please enter the details of the second Staff ID:\n  ID Number: ";
    cin >> ID_number;
    cout << "  Member of a union: ";
    cin >> Member;
    cout << "  Teaching Rating (0.0-5.0): ";
    cin >> rating;
    cout << "\n";
    Lecturer_Two = create_lecturer(ID_number, Member, rating);

    //print lecturer one details
    cout << "Details regarding Lecturer One:\n";
    info_lecturer(Lecturer_One);

    //print lecturer two details
    cout << "Details regarding Lecturer Two:\n";
    info_lecturer(Lecturer_Two);

    //determine better lecture and print
    better_lecturer(Lecturer_One, Lecturer_Two);

    //find combined lecturer and print details
    combined_lec = combined(Lecturer_One, Lecturer_Two);
    cout << "Details regarding Lecturer One and Two combined:\n";
    info_lecturer(combined_lec);

    return 0;
}
