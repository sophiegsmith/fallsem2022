//enum notes
#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

//enumaterated data type
//change the value of the constants here
enum Day {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY} workDay; //

//function prototypes
void display(Day);

int main()
{
    /* ex 1
    Day workDay; //object of enum data type day
    // cannot do this because workday is a day data typpe: workDay =3;
    workDay = MONDAY; //can do this
    cout << workDay << endl; //it would be 0, if you were to display this
    //can typecast it
    workDay = Day(workDay+1);
    cout << workDay << endl;
    workDay = Day(3);
    */
   /*ex2*/
    const int NUM_DAYS = 5;
    double sales[NUM_DAYS];
    //double sales1 = 0.0;
    double total =0.0;

    //get sales for 5 days
    for(workDay = MONDAY; workDay < FRIDAY; workDay = static_cast<Day>(workDay+1)) //workDay = day(workday + 1)
    {
        cout<< "Enter the sales for the day: ";
        display(workDay);
        
        cin >> sales[workDay];
    }
    //using values of enum of 5 days starting from 0, used it like an integer
    for (int i = MONDAY; i <= FRIDAY;  workDay = static_cast<Day>(workDay+1))
    {
        total += sales[workDay];
    }
    cout << "the total sales for the week is: " << total << endl;
    return 0;
}

void display(Day day)
{
    //display the days and not the number
    switch (day)
    {
        case MONDAY: cout << "Monday: ";
            break; 
        case TUESDAY: cout << "Tuesday: ";
            break;
        case WEDNESDAY: cout << "Wednesday: ";
            break;
        case THURSDAY: cout << "Thursday: ";
            break;
        case FRIDAY: cout << "Friday: "; //figure out why Friday is not displaying
            //break;
    }
}

//questions: 