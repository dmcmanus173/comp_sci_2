#include <iostream>
#include "Number Set ADT.h"

using namespace std;

void numberSetAdd(NumberSet& set, Number num)
{
    if(set.count == maxSize)    //can't have count larger than maxSize
    {
        cout << "Error. There is no room in this set to add \"" << num << "\".\n";
    }
    else
    {
        set.items[set.count] = num;     //set.count holds int value for next array position
        set.count++;                    //increment the count
        cout << "\"" << num << "\" has been successfully added to this set.\n";
        cout << "There is now " << set.count << " item[s] in the set.\n";
    }
}

void numberSetRemove(NumberSet& set, Number num)
{
    int i, found=0;
    for(i=0; i<set.count; i++)
    {
        if(set.items[i] == num)
        {
            found = 1;      //flag
            for(; (i+1)<set.count; i++)     //moving each value up to replace item
            {
                set.items[i] = set.items[i+1];
            }
            set.count--;        //decrement the count
            cout << "The first instance of " << num << " has been removed from the set. \n";
            cout << "There is now " << set.count << " item[s] in the set.\n\n";
            break;      //break loop
        }
    }
    if(found == 0)
    {
        cout << num << " could not be found in the set. No change has been made to the set.\n\n";
    }
}

int numberSetCountGreaterThan(NumberSet& set, Number num)
{
    int i, counter=0;
    for(i=0; i<set.count; i++)
    {
        if(set.items[i] > num)      //if item greater than num, increment counter
        {
            counter++;
        }
    }
    return counter;     //return counter to main
}

int numberSetSumEvenOrOdd(NumberSet& set, Number num)
{
    int i, sum=0;
    if(num % 2)     //if odd
    {
        cout << "The number you entered is odd.\n";
        for(i = 0; i < set.count; i++)
        {
            if(set.items[i] % 2)        //if item odd
            {
                sum += set.items[i];    //sum=sum+odd item
            }
        }
    }

    else        //if even
    {
        cout << "The number you entered is even.\n";
        for(i = 0; i < set.count; i++)
        {
            if((set.items[i] % 2) == 0)     //if item even
            {
                sum += set.items[i];    //sum=sum+even item
            }
        }
    }
    return sum;
}

NumberSet newNumberSet()
{
    NumberSet set;      //new set
    set.count = 0;      //counter = 0 because no items inputted.
    cout << "A new set has been created and the item count is set to 0\n\n";
    return set;
}
