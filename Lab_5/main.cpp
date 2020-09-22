#include "Can.h"
#include "Product.h"
#include <iostream>

using namespace std;

int main()
{
    double height, radius, product_vol;
    // Firstly read the height and radius of the can from the screen
    cout << "Enter the height of the can: ";
    cin >> height;
    cout << "Enter the radius of the can: ";
    cin >> radius;
    // Now, declare a variable of type Can, using the
    // constructor that sets the radius and height
    Can myCan(radius, height);
    double volOneGram;
    // Read in the volume of 1 gram of a product and calculate
    // how many grams fit in the can
    cout << "Enter the volume of one gram of the product: ";
    cin >> volOneGram;
    cout << "The can contains " << myCan.gramsInCan(volOneGram) << " grams.\n\n";

    //Enter the amount of an unspecified Product
    cout << "Enter the volume of a product: ";
    cin >> product_vol;
    Product product_One(product_vol);   //creating product
    cout << "A product of volume " << product_One.get_Volume() << " has been created.\n\n";

    Product product_Two;
    cout << "A default product of volume " << product_Two.get_Volume() << " has also been created.\n\n";

    myCan.printCanDetails();    //prints all details can details
    cout << "Attempting to put the product specified by the user into the can.\n";
    myCan.putIntoCan(product_One.get_Volume());

    myCan.printCanDetails();
    cout << "Now attempting to add default product volume into the can.\n";
    myCan.putIntoCan(product_Two.get_Volume());
    myCan.printCanDetails();

    return 0;
}
