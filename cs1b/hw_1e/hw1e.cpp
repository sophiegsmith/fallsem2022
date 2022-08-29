// Attached: HW_1(e)
// File: source.cpp
// =============================================================================
//
// Programmer: Sophie Smith
// Class: CS 1A
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Validate user credentials (HW_1e)
// =============================================================================
// Description:
// Programs asks for user and pw
// validate credentials
//  displays if valid or invalid
// =============================================================================
// =============================================================================

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

// Function prototypes
void getlogin(string& id, string& pw);
bool validatelogin(string& id, string& pw);
void showresult(bool result);

// ==== main ===================================================================
//
// =============================================================================
int main()
{
    // Declaring variables
    string id;
    string pw;
    ifstream infile;
    ifstream outfile;


    //calling functions
    getlogin(id, pw);
    bool valid = validatelogin(id, pw);
    showresult(valid);

    //
    return 0;
}// end of main()

// ======= getlogin ============================================================
//this function gets user credentials
//
// Input:
// string reference to id and pw
// 
//
// Output:
// saves user credentials to parameters
// =============================================================================
void getlogin(string& id, string& pw)
{
    cout << "Enter username: ";
    cin >> id;
    cout << "Enter password: ";
    cin >> pw;
} //end

// ======= validatelogin ============================================================
//this function validate id and pw with the file
//
// Input:
// reference to string id and pw
// 
//
// Output:
// returns true if user valid otherwise false
// =============================================================================
bool validatelogin(string& id, string& pw)
{
    ifstream infile;
    
    infile.open("./login.txt");

    if (!infile.is_open())
    {
        cout << "Cannot open file." << "Program terminates." << endl; 
        return false;
    } else {
        cout << "file opened"<<endl;
    }
    string savedid;
    getline(infile, savedid);  
    string savedpw;
    getline(infile, savedpw);

    if ((id == savedid) && (pw == savedpw))
        return true;
    return false;   
} //end

// ======= showresult ============================================================
//this function displays the user is valid or not
//
// Input:
// boolean result 
// 
//
// Output:
// displays if user is valid or invalid to cout
// =============================================================================
void showresult(bool result)
{
    if (result == true)
        cout << "Valid" << endl;
    else
        cout << "Invalid" << endl;
} //end


/*================================== Output ===================================
Enter username: tommy
Enter password: 12345
file opened
Valid
*/