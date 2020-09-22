#include "Vehicle.h"
class Truck : public Vehicle //derived from vehicle class
{
private:
    int axles;
public:
    Truck(int Truck_ID); //constructor for truck
    void set_axles(int new_axles); //changle axles
    int get_axles(); //return num of axles
    void print_details(); //print all details regarding truck: vehicle id,axles,is/isnt registered...
};
