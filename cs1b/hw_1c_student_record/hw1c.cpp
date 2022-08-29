// Attached: HW_1(c)
// File: source.cpp
// =============================================================================
//
// Programmer: Sophie Smith
// Class: CS 1A
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Student Record (HW_1c)
// =============================================================================
// Description:
// prompts user to enter student's name, id, and password
// and displays as student record
// 
// =============================================================================
// =============================================================================

#include<iostream>
#include<string>
using namespace std;

//function prototype
void getrecord(string&, string&, double&);
void displayrecord(string&, string&, double&);

// ==== main ===================================================================
//
// =============================================================================
int main()
{
    //Declaring variables
    string id;
    string name;
    double gpa = 0.0;
    
    //call functions
    getrecord(id , name, gpa);
    displayrecord(id, name, gpa);
    return 0;
} // end of main()

// ======= getrecord ============================================================
//this function asks for id, name, and gpa from user
//
// Input:
// string referecnce to id, name, pw saves to parameters
// 
//
// Output:
// void
// =============================================================================
void getrecord(string& id, string& name, double& gpa)
{
    cout << "Enter your id: ";
    cin >> id;
    cin.ignore();
    cout << "Enter your name: " ;
    std::getline(std::cin, name);
    cout << "Enter your gpa: ";
    cin >> gpa;
} //end

// ======= displayrecord ============================================================
//this function displays the student record of id, name, gpa
//
// Input:
// the string ref to id, name, and gpa
// 
//
// Output:
// sends output to cout
// =============================================================================
void displayrecord(string& id , string& name, double& gpa)
{
    cout << "Enter a student record:  " << endl;
    cout << "ID: " << id << endl;
    cout << "NAME: " << name << endl;
    cout << "GPA: " << gpa << endl;
} //end


/*================================== Output ===================================
Enter your id: 12345
Enter your name: sally lee
Enter your gpa: 3.1
Enter a student record:  
ID: 12345
NAME: sally lee
GPA: 3.1
*/