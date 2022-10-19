/*
NAME: Sophie Smith
INSTRUCTOR: Mogasemi
CLASS: CS 1B
SECTION: MW 10:30-12:50
LAB 2
*/
#include<iostream>
#include<array>
#include<iomanip>
#include<format>

using namespace std;

//constants
const int ROW = 2;
const int COL = 5;

//function prototypes
void getdata(int numarray[ROW][COL]);
void shownumbers(int numarray[ROW][COL]);


//main function
int main()
{
    //declare variables
    int numarray[ROW][COL];
    int rowsum = 0;
    //call functions
    getdata(numarray);
    shownumbers(numarray);
    
    
    //rowsum = addrows(numarray);
    //highestnum = gethighest(numarray);
    //lowestnum = getlowest(numarray);
    return 0;
}

void getdata(int numarray[ROW][COL])
{
    cout << "Enter integers into a 2d array: " << endl; 

    for (int i = 0; i < 2; i++)
    {
        for (int j=0; j < 5; j++)
        {
            cout << "Enter a number: ";
            cin >> numarray[i][j];
        }
    }
}

void shownumbers(int numarray[ROW][COL])
{
    cout << "Here is the data you enteredd: " << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j=0; j < 5; j++)
        {
            cout << setw(6) << numarray[i][j];
        }
       
        cout << endl;
    }  
}

