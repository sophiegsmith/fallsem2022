#include<iostream>
#include<iomanip>
#include<iomanip>

using namespace std; 
//           1.    2.     3.      4      5
enum Roster{TOM = 1, SHARON = 2, BILL = 3, TERESA = 4, JOHN = 5};

//main function
int main()
{
    //declare variables
    Roster roster;
    int num; 
    Roster userinput = static_cast<Roster>(num);
   

    //displaying the output statement and the roster
    cout << "This program will give you a student's birthday\n";
    cout << "1.) " << " = " << "Tom" << endl;
    cout << "2.) " << " = " << "Sharon" << endl;
    cout << "3.) " << " = " << "Bill" << endl;
    cout << "4.) " << " = " << "Teresa" << endl;
    cout << "5.) " << " = " << "John" << endl;
    
    //prompt user for a person and read in user's input
    cout << "Whose birthday do you want to know?  ";
    cin >> num;

    //switch case:
    switch(num)
    {
        case 1: cout << "Tom's birthday is January 3. " << endl;
            break;
        case 2: cout << "Sharon's birthday is April 27. " << endl;
            break;
        case 3: cout << "Bill's birthday is January 3. " << endl;
            break;
        case 4: cout << " Teresa's birthday is July 2. " << endl;
            break;
        case 5: cout << " John's birthday is June 17. " << endl;
            break;
        default: 
            cout << "invalid entry. " << endl;
    }
   
    return 0;
}

/*
Output:
This program will give you a student's birthday
1.)  = Tom
2.)  = Sharon
3.)  = Bill
4.)  = Teresa
5.)  = John
Whose birthday do you want to know?  3
Bill's birthday is January 3. 
*/