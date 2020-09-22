#include <iostream>
#include <iomanip>      // std::setprecision, req'd for float
#include "staffID.h"
using namespace std;

//Sets parameters to values when variable of Type Lecturer created
Lecturer::Lecturer(int ID, char member_union, float rating)
{
    staff_ID = ID;
    union_membership = member_union;
    teaching_rating = rating;
}

void Lecturer::info_lecturer()
{
    if(staff_ID < 0) //If staff ID is negative, not real.
    {
        cout << "WARNING: This is not a real lecturer.\n";
    }
    cout << "  The lecturer's staff ID is: " << staff_ID << "\n";
    cout << "  Lecturer's Union Membership: " << union_membership << "\n";
    cout << "  This lecturer's teacher rating is: " << setprecision(2) << teaching_rating << "\n\n";
    // prints teaching rating as float with 1 decimal placce
}

void Lecturer::combined(Lecturer& lec)
{
    staff_ID = -1; //dummyvalue of -1
    union_membership = '?'; //dummy value
    teaching_rating = (teaching_rating + lec.teaching_rating)/2; //average of initiated variable and parameter
}

int Lecturer::get_Staff_ID()
{
    return staff_ID;
}

char Lecturer::get_union_membership()
{
    return union_membership;
}

float Lecturer::get_Teaching_rating()
{
    return teaching_rating;
}
