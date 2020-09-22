#include "Point.h"
class Triangle
{
 private:
    Point a;
    Point b;
    Point c;    //always (0,0)
 public:
     Triangle(Point& p1, Point& p2);  //Constructor for Triangle using points p1,p2
     Triangle(double x1, double y1, double x2, double y2);  //Constructor for Triangle using coordinates x1,y1,x2,y2
     double area(); //using heron's area formula
     double perimeter();    //find perimeter of triangle
};
