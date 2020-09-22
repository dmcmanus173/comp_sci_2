#include <iostream>
#include "Number Set ADT.h"
using namespace std;

int main()
{
    int i;
    Number userValue;
    NumberSet set=newNumberSet();   //initialising new set for program
    for(i=0; i<11; i++)
    {
        numberSetAdd(set, i+1);     //trying to add 1-11 to set.
    }
    cout << "\nPlease enter an integer value: ";
    cin >> userValue;
    cout << "\nThere are " << numberSetCountGreaterThan(set, userValue) << " number[s] in the set greater than the value you entered.\n\n";
    cout << numberSetSumEvenOrOdd(set, userValue) << " is the sum of all of the numbers of this kind.\n\n";  //finding if input is odd/even, returning sum of odd/even nums in set
    numberSetRemove(set, 2);    //removing first instance of 2 from set
    numberSetRemove(set, 8);
    numberSetRemove(set, 15);
    cout << "\nThere are " << numberSetCountGreaterThan(set, userValue) << " number[s] in the set greater than the value you entered.\n\n";
    cout << numberSetSumEvenOrOdd(set, userValue) << " is the sum of all of the numbers of this kind.\n\n";
    return 0;
}
