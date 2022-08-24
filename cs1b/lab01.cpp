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

    //open file
    ifstream inFile;
    ofstream outFile;

    

    cout << "Please enter the score: ";

    return 0;
}

double getAverage(double s1,double s2, double s3,double s4, double s5)
{
    return (s1 +s2 + s3 + s4 +s5);
}