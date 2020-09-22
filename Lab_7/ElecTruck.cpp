#include "ElecTruck.h"
#include <iostream>
using namespace std;

//constructor
Electric_Truck::Electric_Truck(int ElecID)
               :Truck(ElecID)
{
    range = 0; //default range
}

//change range of elec truck
void Electric_Truck::set_range(int new_range)
{
    range = new_range;
}

//returns sum of range of two trucks
int Electric_Truck::operator+(Electric_Truck elec1)
{
    int result_range;
    result_range = range + elec1.range;
    return result_range;
}

//print all details regarding truck: vehicle id,range,axles,is/isnt registered...
void Electric_Truck::print_details()
{
    cout << "The vehicle number for this Electric Truck is " << get_vehicle_id() << " which has a range of " << range << " and has " << get_axles() << " axles.\n";
    if(get_v_registered())
    {
        cout << "This Electric Truck has been registered.\n";
    }
    else
    {
        cout << "This Electric Truck has not been registered.\n";
    }
}
