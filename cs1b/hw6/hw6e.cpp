// Attached: HW_6(e)
// File: hw6e.cpp
// File: critters.bin
// =============================================================================
//
// Programmer: Sophie Smith
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: write a struct object to binary file
// =============================================================================
// Description:
// declares a struct object called Cat
// prompts for user input 
// asks user to input another cat record
// binary file is appended to store cat record
// all cats are displayed
// =============================================================================
#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

//struct Object
struct Cat{
    char name[20]; //20 bytes here
    int age; //4 bytes here
};

// ==== main ===================================================================
//
// =============================================================================
int main()
{
    //declare variables
    fstream f;
    int i = 0;
    Cat cat;
    
    //open and verify
    f.open("critters.bin", ios::out | ios::binary);
    if(!f.is_open())
    {
        cout << "file did not open.\n";
    }
    f.close();

    //other cats
    while(i < 3)
    {
        //for user input
        cout << "Enter information about a cat: \n";
        cout<< "NAME: ";
        cin.getline(cat.name, 20);

        cout << "AGE: ";
        cin >> cat.age;
        cin.ignore();
        
        f.write(reinterpret_cast<char*>(&cat), sizeof(Cat));

        i++;
    }
    f.close();
    cout << "Record written to file.\n";
    
     //prompt one more cat
    cout << "Enter one more cat.\n";
    cout << "NAME: ";
    cin.getline(cat.name, 20);
    cout << "AGE: ";
    cin >> cat.age;
    cin.ignore();
    //write to file
    f.open("critters.bin", ios::out | ios::app | ios::binary);
    f.write(reinterpret_cast<char*>(&cat), sizeof(Cat));
    f.close();

    //read the file and print
    cout << "Here is the list of all cats: \n";
    f.open("critters.bin", ios::in | ios::binary);
    while (i <4)
    {
        f.read((char *)&cat, sizeof(Cat));
        cout << left <<setw(10) << cat.name << " " << cat.age << " " << endl;
        i++;
    }
    f.close();

    return 0;
}

/*================================== Output ===================================
Enter information about a cat: 
NAME: tom
AGE: 5
Enter information about a cat: 
NAME: fluffy 
AGE: 3
Enter information about a cat: 
NAME: sweetpea
AGE: 2
Record written to file.
Enter one more cat.
NAME: jasmin
AGE: 4
Here is the list of all cats: 
tom        5
fluffy     3
sweetpea   2
jasmin     4 
*/