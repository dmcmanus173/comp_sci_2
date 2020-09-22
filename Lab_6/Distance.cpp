#include "Distance.h"
#include <iostream>
using namespace std;

//Constructor takes millimeters and converts into type class of m,cm,mm
Distance::Distance(int millimeters)
{
    mmeters = millimeters%10;   //takes millimeter portion
    cmeters = millimeters/10;   //remove millimeters,rest cm
    cmeters = cmeters%100;  //removes meters, leaving cm
    meters = millimeters/1000;  //finds total meters
}

//add two variables of type distance
Distance Distance::operator+(Distance dis)
{
    int millimeters;
    millimeters = (meters + dis.meters)*1000;
    millimeters += (cmeters + dis.cmeters)*10;
    millimeters += mmeters + dis.mmeters;
    Distance Result(millimeters);   //convert from millimeters to m,cm,mm
    return Result;
}

//take one variable of type distance from another
float Distance::operator-(Distance dis)
{
    int One, Two;
    float Result;
    One = meters*1000 + cmeters*10 +mmeters;    //in millimeters
    Two = dis.meters*1000 + dis.cmeters*10 +dis.mmeters;    //in millimeters
    Result = One-Two;
    Result = Result/1000;   //put into meters
    return Result;
}

//if x>z, return true
bool Distance::operator>(Distance dis)
{
    int One, Two;
    One = meters*1000 + cmeters*10 +mmeters;    //convert to mm
    Two = dis.meters*1000 + dis.cmeters*10 +dis.mmeters;
    if(One>Two)
    {
        return true;
    }
    return false;
}

//adds int amount of cm to Distance
void Distance::AddCenti(int centimeters)
{
    cmeters += centimeters;
    meters += cmeters/100;  //adds roverflow to meters
    cmeters = cmeters%100;  //finds final cm value
}

//print distance in m, cm, mm
void Distance::PrintDistance()
{
    cout << "The distance is " << meters << " meters, " << cmeters << " centimeters and " << mmeters << " millimeters.\n";
}
