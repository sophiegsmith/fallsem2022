// Attached: HW_2(a)
// File: hw2a.cpp
// =============================================================================
//
// Programmer: Sophie Smith
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: c_strings
// =============================================================================
// Description:
//  this program will display the users age, lasnt name, and full name
//  by using strings
// =============================================================================
// =============================================================================
#include<iostream>
#include<array>
#include<string>

using namespace std;

//function prototypes
void displayInfo(char fullname[], int age);

// ==== main ===================================================================
// 
// =============================================================================
int main()
{
    //Declaring variables
    char fname[10];
    char lname[10];
    char fullname[20];
    int age = 0;

    //User input
    cout << "Enter your age: " ;
    cin >> age;
    cout << "Enter your name: " ;
    cin >> fname;
    cout << "Enter your last name: ";
    cin >> lname;

    //copy the 1st name
    std::strcpy(fullname, fname);
    //adding a space character between the first and the last name
    fullname[strlen(fname)] = ' ';
    //copy the last name advance the address of the arrary by the lengt to the first name + 1
    std::strcpy(fullname + (strlen(fname) +1), lname);

    displayInfo (fullname, age);
    
    return 0;
} //end of main

// ======= displayinfo ============================================================
//  this displays the full name and age of the user, 
//
// Input:
// string representing firstname, string representing lastname, 
// string representing fullname, int representing age
//
// Output:
// displays full name and age of user
// =============================================================================
void displayInfo(char fullname[], int age)
{
    cout << "Hello " << fullname << ". You are " << age << " years old. " << endl;    
} //end of displayinfo

/*================================== Output ===================================
Enter your age: 20
Enter your name: mark
Enter your last name: lee
Hello mark lee. You are 20 years old. 
*/