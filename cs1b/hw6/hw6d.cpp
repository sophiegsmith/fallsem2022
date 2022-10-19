// Attached: HW_6(d)
// File: hw6d.cpp
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
// writes user input into a binary file
// displays on console
// =============================================================================
#include<fstream>

using namespace std;

//structure object
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

    //while loop to get user input
    //attempt to open file
    f.open("critters.bin", ios::out | ios::binary);
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
        //f.close();

        i++;
    }
    
    //file opened
    cout << "Record written to file.\n";
   

    return 0;
}


/*================================== Output ===================================
Enter information about a cat: 
NAME: Tom
AGE: 5
Enter information about a cat: 
NAME: Fluffy
AGE: 3
Enter information about a cat: 
NAME: Sweet Pea
AGE: 2
Record written to file.
*/