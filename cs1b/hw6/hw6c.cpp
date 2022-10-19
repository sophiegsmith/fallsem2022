// Attached: HW_6(c)
// File: hw6c.cpp
// File: results.txt
// =============================================================================
//
// Programmer: Sophie Smith
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: append a text file
// =============================================================================
// Description:
// adss 3 more numbers to results.txt
// verifies that it opened
// displays what is in the file
// =============================================================================
#include<iostream>
#include<string>
#include<fstream>

using namespace std;


// ==== main ===================================================================
//
// =============================================================================
int main()
{
    //declare variables
    const int SIZE = 3;
    fstream file;
    int nums[SIZE];
    int data[SIZE] = {3,4,5};


    //show numbers in existing file
    file.open("results.txt",ios::out);
    cout << "Here are the numbers in the file.\n";
    file.read("results.txt", sizeof(data));
    for(int i = 0; i < SIZE; i++)
    {
        cout << data[i] << endl;
    }
    file.close();

     //prompt the user to enter 3 more numbers
    for(int i = 0; i < 3; i++)
    {
        cout << "Enter 3 more numbers: ";
        cin >> nums[i];
    }

    //write them to the text file -> results.txt
    file.open("results.txt", ios::out);
    cout << "Writing to the file.\n";

    file.close();

    file.open("results.txt", ios::out);
    for(int i = 0; i < SIZE; i++)
    {
        file << data[i];
    }
    file.close();

    file.open("results.txt", ios::out | ios::app);
    for(int i = 0; i < SIZE; i++)
    {
        file << nums[i];
    }
    file.close();
    
    //verifying the file wrote successfully
    file.open("results.txt", ios::in);
    if(file.is_open())
    {
        cout << "The numbers have been written (appended) to results.txt \n";
    }
    else
    {
        cout << "file did not write successfully\n";
    }
    file.close();

    return 0;
}

/*================================== Output ===================================
Here are the numbers in the file.
3
4
5
Enter 3 more numbers: 6
Enter 3 more numbers: 7
Enter 3 more numbers: 8
Writing to the file.
The numbers have been written (appended) to results.txt
*/