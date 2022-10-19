// Attached: HW_3
// File: hw3.cpp
// File: header1.h
// =============================================================================
//
// Programmer: Sophie Smith
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Display Volume (HW_1d)
// =============================================================================
// Description:
// A program that prompts the user for the month, date and year.
// if the date entered is valid, then the new one is added to it
// then one day is added to it, and the new date is output to the screen
// =============================================================================
// =============================================================================
#include "header1.h"
#include<array>
#include<string>
#include<iomanip>
#include<format>

//function prototypes
void getDate(Date& date);
bool isDateValid(Date &date);
void addOneDay(Date& date);
void displayTomorrow(Date& date);

// ==== main ===================================================================
//
// using a do while loop to get the date, then the display date, and allow 
// the user to do the program again with system("clear") on mac os
//
// =============================================================================
int main()
{
    //declare variables
    Date date;
    char choice;

    do{
        //seed the date
        getDate(date);
        displayTomorrow(date);

        cout << "Do it again? (Y/N):";
        cin >> choice;
        if (choice == 'n' || choice == 'N')
        {
            //clear the screen
            cout << "okay all done." << endl;
            break;
        }
        //on mac os no cls command, 
        system("clear");
    } while (true);
    return 0;
}

// ======= getDate ============================================================
//this function takes in the struct Date
//
// Input:
// struct Date
// 
//
// Output:
// reads the date entered by the user, and returns no value
// =============================================================================
void getDate(Date& date)
{
    bool isvalid;
    do{
        //bool isvalid = isDateValid(date);
        cout << "Enter today's date in the following order: " << endl;
        cout << "Month: ";
        cin >> date.month;
        isvalid = isDateValid(date);
        cout << "Day: ";
        cin >> date.day;
        isvalid = isDateValid(date);
        cout << "Year: ";
        cin >> date.year;
        isvalid = isDateValid(date);
        if(isvalid)
        {
            cout << "Date is valid." << endl;
        }
        else
        {
            cout << "Date is invalid." << endl;
        }
    }  while(!isvalid);
}

// ======= isDateValid ============================================================
//this function makes sure the date entered is valid
//
// Input:
// user input
// 
//
// Output:
// if date object valid, function returns true, otherwise false
// =============================================================================
bool isDateValid(Date& date)
{
    if ((date.month > 0 && date.month < 13) &&
        (date.day > 0 && date.day < 31) &&
        (date.year > 2019)){
            return (true);
        }
    return (false);
}

// ======= addOneDay ============================================================
//this function is a void returning function adds one day to the date entered
//
// Input:
// date user entered
// 
//
// Output:
// adding one day to the user entered date
// =============================================================================
void addOneDay(Date& date)
{
    date.day++;
    if(date.day == 31)
    {
        date.month++;
        date.day = 1;
    }
    if (date.month > 12)
    {
        date.year++;
        date.month = 1;
    }
}

// ======= displayTomorrow ============================================================
//this function is a void returning function displays the date after one day has been
// added to today's date
//
// Input:
// the new date (user entered plus one day)
// 
//
// Output:
// displays the new date
// =============================================================================
void displayTomorrow(Date& date)
{
    addOneDay(date);
    char choice;
    cout << "After adding one day to today's date, tomorrow's date is: " ;
    cout << setw(2);
    cout.fill('0');
    cout << date.month << "/" << date.day << "/" << date.year << endl;
}

/*================================== Output ===================================
Enter today's date in the following order: 
Month: 1
Day: 20
Year: 2020
Date is valid.
After adding one day to today's date, tomorrow's date is: 01/21/2020
Do it again? (Y/N): Y

Enter today's date in the following order: 
Month: 1
Day: 30
Year: 2020
Date is valid.
After adding one day to today's date, tomorrow's date is: 02/1/2020
Do it again? (Y/N): Y

Enter today's date in the following order: 
Month: 12
Day: 30
Year: 2020
Date is valid.
After adding one day to today's date, tomorrow's date is: 01/1/2021
Do it again? (Y/N): Y

Enter today's date in the following order: 
Month: 13
Day: 10
Year: 2020
Date is invalid.
Enter today's date in the following order: 
Month: 
*/