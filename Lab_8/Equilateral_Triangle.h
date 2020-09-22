#include "Triangle.h"

//Equilateral Class derived from Triangle class
class Equilateral_Triangle : public Triangle
{
    private:
        double side_length; //length of 1 side on triangle
    public:
        Equilateral_Triangle(double x, double y);    //Constructor for equilateral triangle
        double area();  //overwriten area method from triangle class
        double perimeter(); //overwriten perimeter method from triangle class
        double get_side_length();   //return side length of equilateral
};
