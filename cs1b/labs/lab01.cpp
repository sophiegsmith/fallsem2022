// Attached: lab01
// File: lab01.cpp
// =============================================================================
//
// Programmer: Sophie Smith
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: 2d Arrays Operations Problem
// =============================================================================
// Description:
// Write a program that creates a 2d array initialized with test data. Use any
// primitiive data type that you wish. The program should have following 
// methods getTotal, getAverage, getRowTotal, getColumnTotal, 
// getHighestinRow, getLowestinRow
// =============================================================================
// =============================================================================
#include<iostream>
#include<array>

using namespace std;

//global variables
const int ROW = 3; 
const int COL = 5;

//Function Protoypes
void gettestscore(double [][COL]);
double gettotalscore(double [][COL]);
double getclassavg(double [][COL], int); //can pass the total score here
double gettotalforstudent(double [ROW][COL], int);
double getavgforstudent(double array[ROW][COL],int student);
double gethighesttestscore(double[][COL], int); 
double getlowesttestscore(double [][COL], int); 

//main function
int main()
{
    //declare variables
    double score[ROW][COL] ={0};
    double total = 0.0;
    //call functions
    gettestscore(score);

    cout << "The class average is: " << getclassavg(test);
    cout << "The total scores for the class is: " << gettotalscore()
    //gettotalforstudent(total); 
    //can use a for loop for calling the function 
    for (int i = 0; i < 3; i++)
    {
        cout << "The total score for student # " << i+1 << gettotalforstudent(score, i) << endl;
        cout << "The average score for student # " << i+1 << getavgforstudent(score, i) << endl;
        cout << "The highest score is " << i+1 << gethighesttestscore(score, i) << endl;
        cout << "The lowest score is " << i+1 << getlowesttestscore(score, i) << endl;
    }
    return 0;
}
void gettestscore(double test[ROW][COL])
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; i <COL; i++)
        {
            cout << "for student # " << i + 1 << "Enter score: " << j + 1; 
            cin >> test [i][j];
        }
        cout << endl;
    }
}

double getclassavg(double test[ROW][COL], int)
{ 
    double sum = 0.0;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; i <COL; i++)
        {
            sum = test[i][j];
        }
        
    }
    return sum; 
}

double getclassavg(double avg[ROW][COL])
{
    return gettotalscore(avg)/(ROW * COL); 
}

double gettotalforstudent(double t[ROW][COL], int student)
{
    double total = 0.0;
    for (int j = 0; j < COL; j++)
    {
        total += t[student][j];
    }
    return total; 
}

double getavgforstudent(double array[ROW][COL],int student)
{
    return gettotalforstudent(array, student)/COL; 
}

double gethighesttestscore(double test[ROW][COL], int student)
{
    double high = test[student][0];
    for (int i = 0; i < COL; i++)
    {
        if (test[student][i] > high)
        {
            high = test[student][i];
        }
    }
    return high;
}

double getlowesttestscore(double test[ROW][COL], int student)
{
    double low = test[student][0];
    for (int i = 0; i < COL; i++)
    {
        if (test[student][i] < low)
        {
            low = test[student][i];
        }
    }
    return low;
}

/*================================== Output ===================================

*/