//class containing distance between points
class Distance{
private:
    int mmeters; //millimeters
    int cmeters; //centimeters
    int meters;
public:
    Distance(int millimeters); //constructor
    Distance operator+(Distance dis); //Add two distances
    float operator-(Distance dis); //Take one distance from other
    bool operator>(Distance dis);   //is dist1>dist2
    void AddCenti(int centimeters); //add int amount of centimeters
    void PrintDistance();   //prints distance in m, cm, mm
};
