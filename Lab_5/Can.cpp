#include "Can.h"
#include <iostream>
using namespace std;

//contructor for variable of type Can
Can::Can(double r, double h)
{
    radius = r;
    height = h;
    contents = 0; //initiate with nothing inside can
}
//calculate volume of Can
double Can::volume()
{
    return Pi*radius*radius*height;
}

//Calculate grams in can
int Can::gramsInCan(double volOneGram)
{
    double canVol = volume();
    double numGrams;
    int numWholeGrams;
    numGrams = canVol/volOneGram;
    numWholeGrams = (int)numGrams;
    return numWholeGrams;
}

//Try and put product into can
void Can::putIntoCan(double amount_product)
{
    if(amount_product > (volume() - contents)) //if there is too much in can/can not big enough
    {
        cout << "The can hasn't enough room for this product.\n\n";
    }
    else //add to can
    {
        contents += amount_product;
        cout << "The product has been added to the can.\n\n";
    }
}

void Can::printCanDetails()
{
    cout << "The radius of the can is: " << radius;
    cout << "\nThe height of the can is: " << height;
    cout << "\nThe volume of the can is: " << volume();
    cout << "\nThe volume of product in the can is: " << contents << "\n\n";
}


