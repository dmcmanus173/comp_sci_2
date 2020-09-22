typedef int Number;

const int maxSize=10;

struct NumberSet
{
    Number items[maxSize];
    int count;
};

void numberSetAdd(NumberSet& set, Number num); // adds ‘num’ to ‘set’ (if possible); otherwise prints error message and makes no change to ‘set’

void numberSetRemove(NumberSet& set, Number num); // removes first instance (if it exists) of ‘num’ from ‘set’; otherwise prints error message and makes no change to ‘set’

int numberSetCountGreaterThan(NumberSet& set, Number num); // returns the number of elements larger than ‘num’ in ‘set’

int numberSetSumEvenOrOdd(NumberSet& set, Number num); // returns the sum of the even elements in ‘set’ if ‘num’ is even; otherwise, returns the sum of the odd elements in ‘set’

NumberSet newNumberSet(); // returns a new, empty NumberSet
