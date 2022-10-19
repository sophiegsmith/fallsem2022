// Attached: HW_5(a)
// File: hw5a.cpp
// =============================================================================
//
// Programmer: Sophie Smith
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Decimal to Binary
// =============================================================================
// Description:
// program prompts the user to enter a non negative integer
// the recursive function will the convert 
// binary to decimal
// =============================================================================
// =============================================================================
#include<iostream>
#include<string>

using namespace std;

//function prototypes
int decToBinary(int num);

// ==== main ===================================================================
//
// =============================================================================
int main()
{
    //declaring variables
    int num = 0;
    //int base = 2;//binary is base 2
    cout << "Enter a positive number greater than 0: ";
    cin >> num;

    if(num <= -1)
    {
        cout<<"Invalid Entry." << endl;
    }
    //calling functions
    cout << decToBinary(num) << endl;

    return 0;
} //end of main

// ======= decToBinary ============================================================
// recursive function that takes in the user input
// divides integer by 2, gives a remainder
// it will call itself
//
// Input:
// user input from main
// 
// Output:
// binary number that returns to main (return to where its called)
// =============================================================================
int decToBinary(int num)
{
    int base = 2; //binary is base 2
    if(num == 0)
    {
        return 0;
    }
    else
    {
        //recursion call
        return(num % 2 + 10 * decToBinary(num/2));
    }
} //end of DecToBinary

/*================================== Output ===================================
Enter a positive number greater than 0: 13
1101
ssmith@keke hw5 % ./hw5a
Enter a positive number greater than 0: 0
0
ssmith@keke hw5 % ./hw5a
Enter a positive number greater than 0: 37
100101
ssmith@keke hw5 % ./hw5a
Enter a positive number greater than 0: -1
Invalid Entry.
-1
*/