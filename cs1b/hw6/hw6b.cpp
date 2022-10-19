// Attached: HW_6(b)
// File: hw6b.cpp
// File: results.txt
// File: data.txt
// =============================================================================
//
// Programmer: Sophie Smith
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: read and write a text file
// =============================================================================
// Description:
// reads the data from data.txt and writes it to resutls.txt
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
    //declaring variables
    const int SIZE = 3;
    fstream file;
    int data[SIZE] = {3,4,5};

    //read from the data.txt file
    file.read("data.txt", sizeof(data));
    for(int i = 0; i < SIZE; i++)
    {
        cout << data[i] << endl;
    }
    file.close();

    //write them to a file called results.txt
    file.open("results.txt", ios::out);
    cout << "writing to the file.\n";

    file.close();

    file.open("results.txt", ios::out);
    for(int i = 0; i < SIZE; i++)
    {
        file << data[i];
    }
    file.close();

    cout << "The data has been written into the file.\n";

    return 0;
}

/*================================== Output ===================================
3
4
5
writing to the file.
The data has been written into the file.
*/