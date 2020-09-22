#include "Truck.h"
#include <iostream>
using namespace std;

//constructor
Truck::Truck(int Truck_ID)
     :Vehicle(Truck_ID) //call base class constructor
{
    axles=2; //default amount of axles
}

//changing amount of axles in truck
void Truck::set_axles(int new_axles)
{
    axles = new_axles;
}

//return amount of axles in truck
int Truck::get_axles()
{
    return axles;
}

//print all details regarding truck: vehicle id,axles,is/isnt registered...
void Truck::print_details()
{
    cout << "This is truck number " << get_vehicle_id() << " which has " << axles << " axles.\n";
    if(get_v_registered())
    {
        cout << "This Truck has been registered.\n";
    }
    else
    {
        cout << "This Truck has not been registered.\n";
    }
}
