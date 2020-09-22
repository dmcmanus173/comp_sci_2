const double Pi=3.1415;

class Can {
private:
    double radius;
    double height;
    double contents;
public:
    Can(double r, double h);                    //constructor for can
    double volume();                            //calculates volume of the can
    int gramsInCan(double volOneGram);          //calculates amount of grams can holds
    void putIntoCan(double amount_product);     //increases contents of can by parameter specification
    void printCanDetails();                     //prints all details contained in can class
};

