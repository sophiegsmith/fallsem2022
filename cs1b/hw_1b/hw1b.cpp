// Attached: HW_1(b)
// File: source.cpp
// =============================================================================
//
// Programmer: Sophie Smith
// Class: CS 1A
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Get Three Temperatures(HW_1b)
// =============================================================================
// Description:
// User inputs 3 temps
// calculates average
// displays average
// =============================================================================
// =============================================================================
#include<iostream>

using namespace std;

//function prototype
void gettemps(int&, int&, int&);
int calcavg(int, int, int);
void displayavg(int);

// ==== main ===================================================================
//
// =============================================================================
int main()
{
  //Declaring variables
    int temp1 = 0,  temp2 = 0 , temp3 = 0;
    //int count = 1;
    int avg = 0;
    //cout << "Please enter 3 different temperatures: ";
    //call functions
    gettemps(temp1, temp2, temp3);
    avg = calcavg(temp1, temp2, temp3);
    displayavg(avg);
    return 0;
} // end of main()

// ======= get temps ============================================================
// This function prompts the user to input a temperature
//
// Input:
// takes in 3 ints
// 
//
// Output:
// void
// =============================================================================
void gettemps(int& temp1, int& temp2, int& temp3)
{
    int count = 1;
	cout << "Plese enter temperature 1: ";
	cin >> temp1;

	count++;
	cout << "Plese enter temperature 2: ";
	cin >> temp2;

	count++;
	cout << "Plese enter temperature 3: ";
	cin >> temp3;
} //end

// ======= calcavg ============================================================
// This function calculating average
//
// Input:
// 3 integerrs
// 
// Output:
// average
// =============================================================================
int calcavg(int temp1, int temp2, int temp3)
{
    return((temp1 + temp2 + temp3)/3);

} //end

// ======= displayavg ============================================================
//this function displays the average temp
//
// Input:
// the avg
// 
//
// Output:
// displays avg to cout
// =============================================================================
void displayavg(int avg)
{
    cout << "The average temperature is: " << avg << endl;
} //end


/*================================== Output ===================================
Plese enter temperature 1: 57
Plese enter temperature 2: 78
Plese enter temperature 3: 65
The average temperature is: 66
*/