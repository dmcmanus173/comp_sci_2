#include <iostream>
#include <fstream>
#include "ElecTruck.h"

using namespace std;

int main()
{
    int input;
    ifstream file; //pointer to input file
    file.open("comp20080-2018-Asst7-data.txt", ios::in); //file to open
    if(!file)   //if the file failed to open
    {
        cout << "The file \"comp20080-2018-Asst7-data.txt\" could not be opened. Please make sure the file is in the project folder.\n";
        return 1;
    }

    //create truck, and 2 elec trucks
    file >> input;  //reading int from the file and storing as int input
    Truck truck1(input);
    file >> input;
    Electric_Truck elec1(input);
    file >> input;
    Electric_Truck elec2(input);

    //print details of trucks
    cout << "The details regarding Truck 1:\n";
    truck1.print_details();
    cout << "\nThe details regarding Electric Truck 1:\n";
    elec1.print_details();
    cout << "\nThe details regarding Electric Truck 2:\n";
    elec2.print_details();

    //registering the vehicles
    truck1.register_vehicle();
    elec1.register_vehicle();
    elec2.register_vehicle();

    //setting axles of the three objects
    file >> input;
    truck1.set_axles(input);
    file >> input;
    elec1.set_axles(input);
    file >> input;
    elec2.set_axles(input);

    //setting range of elec trucks
    file >> input;
    elec1.set_range(input);
    file >> input;
    elec2.set_range(input);

    //printing details to screen again
    cout << "\nThe details regarding Truck 1:\n";
    truck1.print_details();
    cout << "\nThe details regarding Electric Truck 1:\n";
    elec1.print_details();
    cout << "\nThe details regarding Electric Truck 2:\n";
    elec2.print_details();

    //adding range of two elec trucks together
    cout << "\nThe result of adding Electric Truck 1 & 2 is: "  << elec1+elec2 << "km.\n";

    file.close();
    return 0;
}
