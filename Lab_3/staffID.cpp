#include <iostream>
#include <iomanip>      // std::setprecision
#include "staffID.h"
using namespace std;

lecturer create_lecturer(int ID, char member_union, float rating)
{
    lecturer create;
    create.staff_ID = ID;
    create.union_membership = member_union;
    create.teaching_rating = rating;
    return create;
}

void info_lecturer(lecturer &subject)
{
    cout << "  The lecturer's staff ID is: " << subject.staff_ID << "\n";
    cout << "  Lecturer's Union Membership: " << subject.union_membership << "\n";
    std::cout << "  This lecturer's teacher rating is: " << std::setprecision(2) << subject.teaching_rating << "\n\n";
    // prints teaching rating as float with 1 decimal placce
}

lecturer combined(lecturer &lec_one, lecturer &lec_two)
{
    lecturer combined;
    combined.staff_ID = -1; //dummyvalue of 0
    combined.union_membership = '?'; //not real lecture so not member
    combined.teaching_rating = (lec_one.teaching_rating + lec_two.teaching_rating)/2; //average of two lecturers
    return combined;
}

void better_lecturer(lecturer &lec_one, lecturer &lec_two)
{   //if lecture 1 teaching rating is higher, or equal with higher staff ID, better
    if( (lec_one.teaching_rating > lec_two.teaching_rating) || ( (lec_one.teaching_rating == lec_two.teaching_rating)&&(lec_one.staff_ID > lec_two.staff_ID) ) )
    {
        cout << "The first lecturer is better.\n\n";
    }
    //if lecture 2 teaching rating is higher, or equal with higher staff ID, better
    else if( (lec_one.teaching_rating < lec_two.teaching_rating) || ( (lec_one.teaching_rating == lec_two.teaching_rating)&&(lec_one.staff_ID < lec_two.staff_ID) ) )
    {
        cout << "The second lecturer is better.\n\n";
    }
    //incase lecturers have same staff id and rating.
    else
    {
        cout << "These two lecturers are equal.\n\n";
    }
}
