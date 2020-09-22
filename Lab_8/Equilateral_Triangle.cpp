#include "Equilateral_Triangle.h"
#include "Line.h"
#include <math.h>

//Constructor for equilateral triangle using a coordinate
//allowed to assume y is 0 for this assignment
Equilateral_Triangle::Equilateral_Triangle(double x, double y)
            :Triangle(x, y,(x/2), sqrt(x*x - (x/2)*(x/2)))  //call triangle constructor to assign points, uses pythagoras for p2
{
    side_length = x;
}
//calculate area of an equilateral triangle
double Equilateral_Triangle::area()
{
    return side_length*side_length*sqrt(3)/4; //area formula
}

//calculate perimeter of equilateral triangle
double Equilateral_Triangle::perimeter()
{
    return 3*side_length;   //3 sides of equal length
}

//return side length of equilateral triangle
double Equilateral_Triangle::get_side_length()
{
    return side_length;
}
