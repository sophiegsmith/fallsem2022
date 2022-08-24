/*
questions:
github pushing wonky
refresher pass by reference
writing in the text file using the for loop
why does vscode keep staging my changes but not up to date on my github account
adding stuff into txt file from main
build compiler and .json file for bebugging
*/

#include<iostream>
#include<fstream>

using namespace std;

//function prototype
void getTestScore(double &, double &, double &,double &,double &);
double getAverage(double,double,double,double,double);
char grade(double);
void displayGrade(char);

//global const
const int SIZE = 5;

//main function
int main()
{
    double score1 = 0.0;
    double score2 = 0.0;
    double score3 = 0.0;
    double score4 = 0.0;
    double score5 = 0.0;
    double average = 0.0;

    //declare an array
    double numbers[SIZE] = {0};

    //file var
    ifstream inFile;
    ofstream outFile;

    //loop to open file]
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Please enter number # " << i + 1 << ": ";
        cin >> numbers[i];
    }    
    
    outFile.open("inclass.txt");

    cout << "Writing to the file";

    for (int i = 0; i < SIZE; i++)
    {
        outFile << numbers[i];
    }
    cout << "all done"; 
    inFile.close();
    inFile.open("inclass.txt");

    if (inFile.fail())
    {
        cout <<"Error opening the file";
        exit(1);
    }
//
    double num1 = 0.0;
    while (inFile.eof())
    {
        inFile >> num1;
        cout << num1 << endl;
    }
    inFile.close();
    cout << "Please enter the score: ";

    return 0;
}

double getAverage(double s1,double s2, double s3,double s4, double s5)
{
    return (s1 +s2 + s3 + s4 +s5);
}