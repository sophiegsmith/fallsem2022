// Attached: HW_2(c)
// File: hw2c.cpp
// =============================================================================
//
// Programmer: Sophie Smith
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Two Dimensional Array
// =============================================================================
// Description:
// This program will allow a user to input numbers (integers) into
// a 2 dimensional array
//
// =============================================================================
// =============================================================================
#include<iostream>
#include<array>
#include<iomanip>
#include<format>

using namespace std;
const int ROW = 4;
const int COL = 3;
//function prototypes
void getdata(int[ROW][COL]);
void displayarray(int[ROW][COL]);

// ==== main ===================================================================
// 
// =============================================================================
int main()
{
    //declaring variables
    int numarray[ROW][COL];
    getdata(numarray);
    displayarray(numarray);
    return 0;
} //end of main

// ======= getdata ============================================================
//  this function asks user to enter elements of an array
//
// Input:
// integers
//
// Output:
// displays the numbers entered
// =============================================================================
void getdata(int numarray[ROW][COL])
{
    cout << "Enter integers into a 2d array: " << endl; 

    for (int i = 0; i < 3; i++)
    {
        for (int j=0; j < 4; j++)
        {
            cout << "Enter a number: ";
            cin >> numarray[i][j];
        }
    }
} // end of getdata

// ======= displayarray ============================================================
//  this displays the full 2d array
//
// Input:
// integers that represent elements of an array
//
// Output:
// displays the 2d array 
// =============================================================================
void displayarray(int numarray[ROW][COL])
{
    cout << "Here is the data in the 2-dimensional array: " << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j=0; j < 4; j++)
        {
            cout << setw(6) << numarray[i][j];
        }
        //formatting everything to the right and evenly space the columns
        cout << endl;
    }  
} //end of displayarray

/*================================== Output ===================================
Enter integers into a 2d array: 
Enter a number: 1
Enter a number: 45
Enter a number: 765
Enter a number: 6
Enter a number: 32
Enter a number: 45
Enter a number: 789
Enter a number: 343
Enter a number: 22
Enter a number: 64
Enter a number: 12
Enter a number: 555
Here is the data in the 2-dimensional array: 
     1    45   765    32
    32    45   789    22
    22    64    12   555
*/