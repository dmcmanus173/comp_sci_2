#include "Product.h"
#include <iostream>
using namespace std;

//default constructor of product class
Product::Product()
{
    volume = volDefault;
}

//constructor if volume of product specified as parameter
Product::Product(double input_Vol)
{
    volume = input_Vol;
}

//method to return volume of product
double Product::get_Volume()
{
    return volume;
}
