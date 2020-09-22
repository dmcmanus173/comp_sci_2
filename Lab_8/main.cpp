#include <iostream>
#include "Equilateral_Triangle.h"
#include <math.h>
#include <fstream>
using namespace std;

int main()
{
    //Triangle where user inputs x,y coordinates
    double x1, y1, x2, y2, area;
    cout << "Please enter the X coordinate of the first point: ";
    cin >> x1;
    cout << "Please enter the Y coordinate of the first point: ";
    cin >> y1;
    Point p1(x1,y1); //creating Point using x & y
    cout << "Please enter the X coordinate of the second point: ";
    cin >> x2;
    cout << "Please enter the Y coordinate of the second point: ";
    cin >> y2;
    Point p2(x2,y2);
    cout << "Creating a triangle using the points (0,0), (" << p1.getx() << "," << p1.gety() << ") and (" << p2.getx() << "," << p2.gety() << ")\n";
    Triangle t1(p1, p2);

    //Triangle where inputs x,y are from file comp20080-2018-Asst8-data.txt
    ifstream file; //pointer to input file
    file.open("comp20080-2018-Asst8-data.txt", ios::in); //file to open
    if(!file)   //if the file failed to open
    {
        cout << "The file \"comp20080-2018-Asst8-data.txt\" could not be opened. Please make sure the file is in the project folder.\n";
        return 1;
    }
    file >> x1;  //reading double from the file and storing as double x1
    file >> y1;
    file >> x2;
    file >> y2;
    cout << "Creating a triangle using inputs from the file \"comp20080-2018-Asst8-data.txt\"\nIt has points (0,0), (" << x1 << "," << y1 << ") and (" << x2 << "," << y2 << ").\n";
    Triangle t2(x1, y1, x2, y2);
    file.close();

    //Calculating area of triangles
    cout << "The area of the first triangle is ";
    if((area = t1.area()) == 0) //if the area is equal to 0
    {
        cout << "trivial.\n";
    }
    else    //if area is greater than 0
    {
        cout << area << ".\n";
        cout << "The perimeter of this triangle is " << t1.perimeter() << ".\n\n";
    }
    cout << "The area of the second triangle is ";
    if((area = t2.area()) == 0)
    {
        cout << "trivial.\n";
    }
    else
    {
        cout << area << ".\n";
        cout << "The perimeter of this triangle is " << t2.perimeter() << ".\n\n";
    }

    //creating equilateral triangle
    cout << "Please enter the X coordinate of an equilateral triangle. The Y will be 0.\nX Coordinate: ";
    cin >> x1;
    Equilateral_Triangle e1(x1,0);
    cout << "The length of a side of this equilateral triangle is " << e1.get_side_length() << ".\n";
    cout << "The area of the triangle is ";
    if((area = e1.area()) == 0)
    {
        cout << "trivial.\n";
    }
    else
    {
        cout << area << ".\n";
        cout << "The perimeter of the equilateral triangle is " << e1.perimeter() << ".\n";
    }


    return 0;
}
