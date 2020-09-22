class Point
{// The private fields in the class
private:
  double x;
  double y;
// The public functions for accessing the class
public:
  double getx();
  double gety();
  void setx(double a);
  void sety(double b);
  // First constructor – doesn't take any arguments
  Point();
  // Second constructor - construct a point given two doubles as input
  Point(double a, double b);
};
