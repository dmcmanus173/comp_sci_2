#include "Truck.h"
class Electric_Truck : public Truck //class derived from truck class
{
private:
    int range; //in km
public:
    Electric_Truck(int ElecID); //constructor for electruck, range set to 0
    void set_range(int new_range); //change range
    int operator+(Electric_Truck elec1); //returns range of 2 elec trucks
    void print_details(); //print all details regarding electruck: vehicle id,range,axles,is/isnt registered...
};
