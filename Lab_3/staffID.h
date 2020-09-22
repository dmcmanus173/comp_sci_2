//Set Containing Lecturer Details
struct lecturer
{
    int staff_ID;
    char union_membership;
    float teaching_rating;

};

//Function allows creating of new lecturer
lecturer create_lecturer(int ID, char member_union, float rating);

// prints the details of a lecturer attached as parameter
void info_lecturer(lecturer& subject);

// returns combineation two lecturers and finds average of teaching ability
lecturer combined(lecturer& lec_one, lecturer& lec_two);

// ccompares two lecturers and prints the better, if there is one
void better_lecturer(lecturer& lec_one, lecturer& lec_two);
