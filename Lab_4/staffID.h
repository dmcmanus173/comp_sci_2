class Lecturer
{
    private:
        int staff_ID;
        char union_membership;
        float teaching_rating;
    public:
        //constructor for variable of type Lecturer
        Lecturer(int ID, char member_union, float rating);
        //get private functions
        int get_Staff_ID();
        char get_union_membership();
        float get_Teaching_rating();
        //Combine initiated variable with parameter
        void combined(Lecturer& lec);
        //Print info of initiated variable
        void info_lecturer();
};
