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
    string id;
    string name;
    double gpa = 0.0;
    
    //call functions
    getrecord(id , name, gpa);
    displayrecord(id, name, gpa);
    return 0;
}

//functions
void getrecord(string& id, string& name, double& gpa)
{
    cout << "Enter your id: ";
    cin >> id;
    cin.ignore();
    cout << "Enter your name: " ;
    std::getline(std::cin, name);
    cout << "Enter your gpa: ";
    cin >> gpa;
}

void displayrecord(string& id , string& name, double& gpa)
{
    cout << "Enter a student record:  " << endl;
    cout << "ID: " << id << endl;
    cout << "NAME: " << name << endl;
    cout << "GPA: " << gpa << endl;
}

//output
/*
Enter your id: 12345
Enter your name: sally lee
Enter your gpa: 3.1
Enter a student record:  
ID: 12345
NAME: sally lee
GPA: 3.1
*/