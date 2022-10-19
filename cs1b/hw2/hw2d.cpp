// Attached: HW_2(d)
// File: hw2d.cpp
// =============================================================================
//
// Programmer: Sophie Smith
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Student Grades
// =============================================================================
// Description:
//  Reads in a file called grades.txt and assigns it to a 2d array
//  Then it will calculate student average, and display it
//  as well as subject average and display it
// =============================================================================
// =============================================================================
#include<iostream>
#include<array>
#include<fstream>
#include<format>
#include<iomanip>

using namespace std;
const int ROW = 5;
const int COL = 3;
const double A = 4.0;
const double B = 3.0;
const double C = 2.0;
const double D = 1.0;
const double F = 0;

const int ENGLISH = 0;
const int HISTORY = 1;
const int MATH = 2;

//function prototypes
void readstudentgrades(char[ROW][COL]);
void displaystudentgrades(char[ROW][COL]);
double calcavgforstudent(char *student_grades, int numberofclasses);
void displaystudentgpa(char[ROW][COL]);
double calcavgforsubject(char [ROW][COL],int subject);
void displayavgforsubject(char[ROW][COL]);

// ==== main ===================================================================
// /*open the file, reads the elements from a file and assign it to a 2d array */
// =============================================================================
int main()
{
    //declare variables
    char gradearray[ROW][COL];

    //Call functions
    //read in student grades
    readstudentgrades(gradearray);
    //displaying the 2d student array
    displaystudentgrades(gradearray);
    //displaying the gpa of the 5 students
    displaystudentgpa(gradearray);
    //displaying the average for the subject
    displayavgforsubject(gradearray); 
 return 0;
} //end of main

// ======= readstudentgrades ============================================================
//  this reads the grades from the file
//
// Input:
// file
// 
//
// Output:
// puts file into a 2d array
// =============================================================================
void readstudentgrades(char gradearray[ROW][COL])
{
    //declaring file variables
    fstream outfile;
    
    //read file and assign to array
    ifstream infile("grades.txt");
    if (!infile.is_open())
    {
        cout << "File did not open.";
        return;
    }
    string grade; 

    while(!infile.eof())
    {

        for (int i = 0; i < ROW; i++)
        {
            for(int j = 0; j< COL; j++)
            {
                //getline(infile, grade);  
                infile >> gradearray[i][j];
            }
        }
    }
}//end of readstudentgrades

// ======= displaystudentgrades ============================================================
//  this displays the 2d array
//
// Input:
// char grade array
// 
//
// Output:
// displays a 4 x 5 2d array
// =============================================================================
void displaystudentgrades(char gradearray[ROW][COL])
{
    cout << "All Grades" << endl;

    cout << "Student " << setw(6) << "English " << setw(6)<< "History " << setw(6) << "Math " << endl;

    for (int i = 0; i < ROW; i++)
    {
        cout << "#"<< i + 1;
        for (int j =0; j < COL; j++)
        {
            cout << setw(7);
            cout << " " << gradearray[i][j];
        }
        cout << endl;
    }   

} //end of displaystudentgrades

// ======= calcavgforstudent ============================================================
// calculates the avg of the students, which is represented by the rows of 2d
// array
// must also turn it into its grade point first before calculations
//
// Input:
// char grade array
// 
//
// Output:
// returns a double representing the sum avg for each student
// =============================================================================
double calcavgforstudent(char *student_grades, int numofclasses)
{
    //get the num of classes
    double sum = 0.0;

    for (int i = 0; i < numofclasses; i ++)
    {
        //switch on letter grade
        char grade = student_grades[i]; 
        switch (grade)
        {
        case 'A':
            sum += A;
            break;
        case 'B':
            sum += B;
            break;
        case 'C':
            sum += C;
            break;
        case 'D':
            sum += D;
            break;
        case 'F':
            sum += F;
            break;
        
        default:
            break;
        }
    }
    //get sum
    sum = sum/numofclasses;
    return sum;
} //end of calcavg

// ======= displaystudentgpa ============================================================
// this function displays the student sum
//
// Input:
// double avg for each student
// 
//
// Output:
// returns calculated sum avg for each student
// =============================================================================
void displaystudentgpa(char gradearray[ROW][COL])
{
    cout << "Student GPAs" << endl; 
    cout << "Student " << endl;

    double avg = 0.0;
    for (int i = 0; i < 5; i++)
    {
        avg = calcavgforstudent(&gradearray[i][0], 3);
        cout << setprecision(3);    
        cout << "# " << i+1 << "   "<< avg << endl;
    }

} // end of displaystudentgpa

// ======= calcavgforsubject ============================================================
// this function calculates avg sum for subject, represented by the columns
//
// Input:
//  the array, and a double
// 
//
// Output:
// returns a double representing avg for the subject
// =============================================================================
double calcavgforsubject(char gradearray [ROW][COL], int subject)
{
    double sum = 0.0;
    for (int j = 0; j < ROW; j++)
        {
        //switch on letter grade
        char grade = gradearray[j][subject]; 
        switch (grade)
        {
        case 'A':
            sum += A;
            break;
        case 'B':
            sum += B;
            break;
        case 'C':
            sum += C;
            break;
        case 'D':
            sum += D;
            break;
        case 'F':
            sum += F;
            break;
        default:
            continue;
        }

        }
    return sum/5; 

} // end of calcavgforsubject

// ======= displayavgforsubject ============================================================
// this function displays the avg for the subject
//
// Input:
// double avgforsubject
// 
//
// Output:
// displays sum for subject
// =============================================================================
void displayavgforsubject(char gradearray[ROW][COL])
{
    cout << "Average GPA by Subject" << endl;
    cout << setw(7) <<"English" << setw(10) <<"History" << setw(7) <<"Math" << setw(7) << endl;
    cout << setprecision(3);
    cout << calcavgforsubject(gradearray, ENGLISH) << setw(7)<< calcavgforsubject(gradearray, HISTORY) << setw(9)<< calcavgforsubject(gradearray, MATH) << endl;

} //end of displayavgforsubject

/*================================== Output ===================================
All Grades
Student English History  Math 
#1       A       A       B
#2       C       C       F
#3       C       D       B
#4       B       A       C
#5       B       A       B
Student GPAs
Student 
# 1   3.67
# 2   1.33
# 3   2
# 4   3
# 5   3.33
Average GPA by Subject
English   History   Math
    2.8      3      2.2
*/
