const double volDefault = 7.75; //default volume of product

class Product{
private:
    double volume;
public:
    Product();                  //constructor for default amount of product
    Product(double input_Vol);  //constructor that inputs amount of product in parameter
    double get_Volume();        //method that returns the volume in class
};

