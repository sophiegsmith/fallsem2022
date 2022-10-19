// Attached: HW_2(b)
// File: hw2b.cpp
// =============================================================================
//
// Programmer: Sophie Smith
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Check id
// =============================================================================
// Description:
//  Asks the user to enter the id, and the program will search whether the id
//  is in the array
// =============================================================================
// =============================================================================
#include<iostream>
#include<array>
#include<string>

using namespace std;

// ==== main ===================================================================
// 
// =============================================================================
int main()
{
    //declare variables
    int idnumbers[5] = {12345, 54321, 11223, 33211, 44411};

    int id;
    cout << "Enter an id (5 digits long: ";
    cin >>id;
    
    for (int i =0 ; i < 5; i++)
    {
        if (id == idnumbers[i]){
           cout << "id is in the array.";
           return 0;
        }
    }

    cout << "id is not in the array.";
    return 0;
} //end of main

/*================================== Output ===================================
Enter an id (5 digits long: 12345
id is in the array.                    
Enter an id (5 digits long: 54321
id is in the array.                    
Enter an id (5 digits long: 11223
id is in the array.
Enter an id (5 digits long: 33211
id is in the array.
Enter an id (5 digits long: 44411
id is in the array.
Enter an id (5 digits long: 67891
id is not in the array.
*/