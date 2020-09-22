#include "Triangle.h"
#include "Line.h"
#include <math.h>
#include <iostream>
using namespace std;

//Constructor for triangle using points p1,p2
Triangle::Triangle(Point& p1, Point& p2)
{
    Point p3(0,0); //create 3rd point
    //assign points to triangle
    a=p1;
    b=p2;
    c=p3;
    cout << "Triangle created with points: (0,0), (" << p1.getx() << "," << p1.gety() << ") and (" << p2.getx() << "," << p3.gety() << ").\n\n";
}

//Constructor for triangle using coordinates
Triangle::Triangle(double x1, double y1, double x2, double y2)
{
    //Convert coordinates into points
    Point p1(x1,y1);
    Point p2(x2,y2);
    Point p3(0,0);
    //assign points to triangle
    a=p1;
    b=p2;
    c=p3;
    cout << "Triangle created with points: (0,0), (" << x1 << "," << y1 << ") and (" << x2 << "," << y2 << ").\n\n";
}

//Calculate area of triangle
double Triangle::area()
{
    //make lines from point on triangle
    Line Line1(a, b);
    Line Line2(b, c);
    Line Line3(c, a);
    //find length of each line
    double length1 = Line1.length();
    double length2 = Line2.length();
    double length3 = Line3.length();
    //applying Heron's formula
    double S = (length1 + length2 + length3)/2;
    return sqrt(S*(S-length1)*(S-length2)*(S-length3));
}

//Calculating perimeter of triangle
double Triangle::perimeter()
{
    //make lines from point on triangle
    Line Line1(a, b);
    Line Line2(b, c);
    Line Line3(c, a);
    //find length of each line
    double length1 = Line1.length();
    double length2 = Line2.length();
    double length3 = Line3.length();
    //adding the lengths to get perimeter
    return length1 + length2 + length3;
}
