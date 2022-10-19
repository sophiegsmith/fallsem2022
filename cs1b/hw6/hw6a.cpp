// Attached: HW_6(a)
// File: hw6a.cpp
// File: data.txt
// =============================================================================
//
// Programmer: Sophie Smith
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: read text from a file
// =============================================================================
// Description:
// reads the data from a text file and displays on console
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
    fstream file;
    int num;
    const int SIZE = 3;
    int data[SIZE] = {3,4,5};

    file.open("data.txt", ios::out);
    cout << "Here are the numbers in the file.\n";

    //writing to the file of "data.txt"
    file << 3 << endl;
    file << 4 << endl;
    file << 5 << endl; 

    file.close();

    file.open("data.txt", ios::in);

    //lets close the file using a while loop
    while(file.eof())
    {
        file >> num; 
        cout << num;
        file.close();
    }
    file.close();

    //output to terminal
    file.read("data.txt", sizeof(data));
    for(int i = 0; i < SIZE; i++)
    {
        cout << data[i] << endl;
    }
    file.close();

    cout << "done!\n";

    return 0;
}

/*================================== Output ===================================
Here are the numbers in the file.
3
4
5
done!
*/