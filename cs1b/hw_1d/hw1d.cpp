// Attached: HW_1(d)
// File: source.cpp
// =============================================================================
//
// Programmer: Sophie Smith
// Class: CS 1A
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Display Volume (HW_1d)
// =============================================================================
// Description:
//  prompts user to enter 3 dimensions of swimming pool
//  checks the dimensions, and displays
//  dimensions and volume
// =============================================================================
// =============================================================================
#include<iostream>

using namespace std;

// Function prototypes
void getdimensions(int&, int&, int&);
bool arevalid(int, int, int);
int calcvolume(int, int, int,int);
void displayvolume(int, int, int, int);

// ==== main ===================================================================
//
// =============================================================================
int main()
{
    // Declaring variables
    int width = 0, length = 0, depth = 0;
    int volume = 0;
    //call functions
    getdimensions(width, length, depth);
    bool isvalid = arevalid(width, length, depth);
    volume = calcvolume(width, length, depth, volume);
    displayvolume(width, length, depth, volume);
    return 0;
} // end of main()

// ======= getdimensions ============================================================
//this function gets the width, length, and depth
//
// Input:
// int width, int length, int depth
// 
//
// Output:
// saves to width, length and depth
// =============================================================================
void getdimensions(int& width, int& length, int& depth)
{
    int count = 1;
    
    cout << "Enter width of the pool: ";
    cin >> width;

    count++;
    cout << "Enter length of the pool: ";
    cin >> length;

    count++;
    cout << "Enter depth of the pool: ";
    cin >> depth;
}//end

// ======= arevalid ============================================================
//this function validates width length and dept
//
// Input:
// int width, length, depth
// 
//
// Output:
// returns true valid otherwise false
// =============================================================================
bool arevalid(int width, int length, int depth)
{
    if ((width > 5 && width < 20) &&
        (length > 5 && length <100) &&
        (depth > 1 && depth < 12)){
            return (true);
        }
    return (false);
}//end

// ======= calcvolume ============================================================
//this function calculates volume
//
// Input:
// int widht, length, depth, and volume
// 
//
// Output:
// return volume
// =============================================================================
int calcvolume(int width, int length, int depth, int volume)
{
    volume = width * length * depth;
    return volume;
}//end

// ======= displayvolume ============================================================
//this function displays the volume
//
// Input:
// the int width, length, depth and volume
// 
//
// Output:
// displays volume to cout
// =============================================================================
void displayvolume(int width, int length, int depth, int volume)
{
    cout << "Width: " << width << endl;
    cout << "length: " << length << endl;
    cout << "Depth: " << depth << endl;
    cout << "The volume is " << volume << " cubic feet." << endl;
}//end


/*================================== Output ===================================
Enter width of the pool: 12
Enter length of the pool: 12
Enter depth of the pool: 10
Width: 12
length: 12
Depth: 10
The volume is 1440 cubic feet.
*/