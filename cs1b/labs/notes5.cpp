/*STRUCT WILL BE ON THE QUIZ*/
//using the headerfile

#include "header.h"
#include<string>
#include<array>

const int SIZE = 3;

void getrecord(Student& student);
void showstudent(Student& student);

int main()
{
    Student s1 = {12345, "Mark Lee"};
    Student s2;

    cout << "Student #1: ";
    showstudent(s1);

    cout << "student 2 record: ";
    getrecord(s2);

    cout << "Student 2: ";
    showstudent(s2);

    //object of struct
    //using student data type
    /*
    Student student; 
    Student student1 = { 12345, "sophie" , 3.5};
    */

    /*Student student[SIZE];
    cout << "Enter " << SIZE << " students: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "# " << i + 1 << " : ";
        cout << "ID: ";
        cin >> student[i].id;
        cin.ignore();
        cout << "Name:   ";
        getline(cin, student[i].name);
    }

    cout << "Here is the data: " << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "ID: " << student[i].id << endl;
        cout << "Name: "<<student[i].name << endl;
        cout << "Gpa: "<<student[i].gpa << endl;
    } */

    // . is an operator --> to call the function --> calling it field of struct
    /*cout << student.id << "   " <<student.name << "    " << student.gpa << endl;

    cout << student1.id << "   " <<student1.name << "    " << student1.gpa << endl;

    cout << "Enter student id: ";
    cin >> student.id;

    cin.ignore();
    cout << "Enter student name: ";
    getline(cin, student.name);

    cout << "Enter student gpa: ";
    cin >> student.gpa;

    cout << student.id << "   " <<student.name << "    " << student.gpa << endl << endl;
    */
    return 0;
}

void getrecord(Student& s)
{
    cout << "enter id: ";
    cin >> s.id;
    cin.ignore();
    cout << "enter name: ";
    getline(cin, s.name);

}
void showstudent(Student& s)
{
    cout << "ID: " << s.id << endl;
    cout << "name: " <<s.name << endl << endl<<endl; 
}
