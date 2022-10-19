// Attached: HW_5(c)
// File: hw5c.cpp
// =============================================================================
//
// Programmer: Sophie Smith
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Display all Even Values from 
// =============================================================================
// Description:
// use a recursive function to display odds from 20 to 0
// =============================================================================
#include<iostream>

using namespace std;
//function prototypes
void showOddNum(int num);

// ==== main ===================================================================
//
// =============================================================================
int main()
{
    int num = 20;
    showOddNum(num);
    return 0;
} //end of main

// ======= showOddNum ============================================================
// recursive function that takes in the number
// gives you odds from 20 to 0
// it will call itself
//
// Input:
// num
// 
// Output:
// display odd nums (return to where its called)
// =============================================================================
void showOddNum(int num)
{
    if(num >= 1) //when i did <= 20, it never left the loop
    {
        if (num % 2 == 1)
        {
             cout << num << "\t";
        }
       showOddNum(num - 1);
    }
} //end of showOddNum

/*================================== Output ===================================
19      17      15      13      11      9       7       5       3       1  
*/