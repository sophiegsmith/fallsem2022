// Attached: HW_5(b)
// File: hw5b.cpp
// =============================================================================
//
// Programmer: Sophie Smith
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Display all Even Values from 1 to 20
// =============================================================================
// Description:
// use a recursive function called showevens from 1 to 20
// =============================================================================
// =============================================================================
#include<iostream>

using namespace std;

//function prototypes
void showEvens(int number);

// ==== main ===================================================================
//
// =============================================================================
int main()
{
    //declaring variables
    int number = 1;
    showEvens(number);
    return 0;
}//end of main

// ======= showEvens ============================================================
// recursive function that takes in the number
// gives you evens from 1 to 20
// it will call itself
//
// Input:
// number
// 
// Output:
// display evens (return to where its called)
// =============================================================================
void showEvens(int number)
{
    if(number <= 20)
    {
        if(number % 2 == 0)
        {
            cout << number  << "\t";
        }
        showEvens(number + 1);
    }
} //end of showEvens

/* output 
2       4       6       8       10      12      14      16      18      20      
*/