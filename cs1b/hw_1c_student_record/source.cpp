//coming back to this

#include<iostream>
#include<string>

using namespace std;

//function prototype
void getrecord(string&, string&, double&);
void displayrecord(string&, string&, double&);

//main function
int main()
{
    //variables
    string id[5];
    string name[20];
    double gpa = 0.0;
    return 0;
    //call functions
    getrecord(string, string, double);
    displayrecord(string, string, double);
    return 0;
}

//functions
void getrecord(string& id, string& name, double& gpa)
{
    cout << "Enter your id: " << id << endl;
    cout << "Enter your name (first and last, only 20 characters: " << name << endl;
    cout << "Enter your gpa: " << gpa << endl;
}

void displayrecord(string& id , string& name, double& gpa)
{
    cout << "Enter a student record:  " << endl;
    cout << "ID: " << id << endl;
    cout << "NAME: " << name << endl;
    cout << "GPA: " << gpa << endl;
}
