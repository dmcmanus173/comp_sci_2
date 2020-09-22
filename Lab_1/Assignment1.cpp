/*==================================================================
 *
 *               University College Dublin
 *          COMP20080 - Computer Sci for Engineers II
 *
 * Assignment:  Input 3 times to sum of the 2 largest inputs minus
 *              the smallest input.
 *
 * File Name:   Assignment1.cpp
 *
 * Description: User inputs three timevalues in format hh:mm:ss
 *              Program converts into total seconds
 *              Sorts values from Highest to Lowest
 *              Finds value of Highest + 2nd Highest - Lowest
 *              Prints value on screen in hh:mm:ss format.
 *
 * Authors:     Daniel McManus
 *
 * Date:        25 September 2018
 *
 *==================================================================*/

 /*==================================================================
 * Systems header files
 *==================================================================*/
#include <iostream>
#include <string>
using namespace std;

/*==================================================================
* struct 'timet'
==================================================================*/
struct timet{
    int hours;
    int minutes;
    int seconds;
};

/*==================================================================
* Function Prototypes
==================================================================*/
timet calculateTime(timet, timet, timet);
timet get_time(int);
int convert_to_sec(timet);
timet convert_to_time(int);
int final_time_calc(int, int, int);
void sort_descending(int *);

/****************************************************************************
 *
 * Procedure Name : main
 *
 * Purpose        : Calls function to scan in time variables
 *                  Calls function to calculate the sum of the variables
 *
 * Parameters     : none
 *
 ****************************************************************************/
int main()
{
    timet time_1, time_2, time_3, final_time;
    cout << "********************************************\n";
    cout << "*  Enter 3 times to find: the sum of the   *\n";
    cout << "* largest 2 times minus the smallest time. *\n" ;
    cout << "********************************************\n\n";
    time_1=get_time(1);
    time_2=get_time(2);
    time_3=get_time(3);
    final_time = calculateTime(time_1, time_2, time_3);
    cout << "The calculated time is: " << final_time.hours << ":" << final_time.minutes << ":" << final_time.seconds << ".\n";
    cout << "\n********************************************\n\n";
    return 0;
}

/****************************************************************************
 *
 * Procedure Name : get_time
 *
 * Purpose        : Scans in values for a time variable
 *
 * Parameters     : num, this is to specify what time is being scanned in
 *
 ****************************************************************************/
timet get_time(int num)
{
    timet input;
    cout << "Please enter the amount of hours in time " << num << ":\n";
    cin >> input.hours;
    cout << "Please enter the amount of minutes in time " << num << ":\n";
    cin >> input.minutes;
    cout << "Please enter the amount of seconds in time " << num << ":\n";
    cin >> input.seconds;
    cout << "\nYou have entered: " << input.hours << ":" << input.minutes << ":" << input.seconds << ".\n\n";
    cout << "********************************************\n\n";
    return input;
}

/****************************************************************************
 *
 * Procedure Name : calculateTime
 *
 * Purpose        : Calls functions to convert time variables into total seconds
 *                  Proceeds to call a function that will find desired time
 *                  value, in seconds.
 *                  Calls another function to convert seconds into time format
 *                  Returns final time
 *
 * Parameters     : t1, t2, t3 - the 3 time variables input by user
 *
 ****************************************************************************/
 timet calculateTime(timet t1, timet t2, timet t3)
 {
    int sec1, sec2, sec3, finalsec;
    timet finaltime;
    sec1 = convert_to_sec(t1);
    sec2 = convert_to_sec(t2);
    sec3 = convert_to_sec(t3);
    finalsec = final_time_calc(sec1, sec2, sec3);
    finaltime = convert_to_time(finalsec);
    return finaltime;
 }

 /****************************************************************************
 *
 * Procedure Name : convert_to_sec
 *
 * Purpose        : Finds time in hh:mm:ss in total seconds
 *
 * Parameters     : time - a struct time variable
 *
 ****************************************************************************/
 int convert_to_sec(timet time)
 {
     time.minutes += time.hours*60;  //hours added to minutes variable
     time.seconds += time.minutes*60;//minutes added to seconds
     return time.seconds;
 }

 /****************************************************************************
 *
 * Procedure Name : final_time_calc
 *
 * Purpose        : Puts variables into an array.
 *                  Calls function to organise array from High-Low
 *                  Finds Highest Value + 2ndHighest - Lowest Value
 *                  Returns calculated value
 *
 * Parameters     : sec1, sec2, sec3 - users inputted times in seconds
 *
 ****************************************************************************/
 int final_time_calc(int sec1, int sec2, int sec3)
 {
    int group_time[2];
    int *group, fin;
    group_time[0] = sec1;
    group_time[1] = sec2;
    group_time[2] = sec3;
    group = &group_time[0];
    sort_descending(group);
    fin = group_time[0] + group_time[1] - group_time[2]; //equation
    delete [] group_time;
    return fin;
 }

 /****************************************************************************
 *
 * Procedure Name : sort_descending
 *
 * Purpose        : Sorts array from High to Low
 *
 * Parameters     : none
 *
 ****************************************************************************/
 void sort_descending(int *group)
 {
    int temp, i, j;
    for(i=0; i<3; i++)      //3 is the number of time variables
	{
		for(j=i+1; j<3; j++)
		{
			if(group[i] < group[j])
			{
				temp  = group[i];
				group[i] = group[j];
				group[j] = temp;
			}
		}
	}
 }

 /****************************************************************************
 *
 * Procedure Name : convert_to_time
 *
 * Purpose        : Takes a variable in seconds and sorts it into hh:mm:ss
 *
 * Parameters     : seconds
 *
 ****************************************************************************/
 timet convert_to_time(int seconds)
 {
     timet time;
     time.seconds = seconds%60;    //remainder of time in seconds
     time.minutes = seconds/60;    //total minutes in seconds
     time.hours = time.minutes/60; //hours in total minutes
     time.minutes = time.minutes%60;//minutes < 60
     return time;
 }
