#include "Payroll.h"

//constant for number of employees
const int NUM_EMPLOYEES = 7; 

int main()
{
    //define an instance of the Payroll class
    Payroll employees[NUM_EMPLOYEES];
    //local variable for the hours
    double prhours;
    //local variable for the pay rate
    double prrate;
    //loop counter
    int count;

    //get the rate and hours from the user
    cout << "Enter the hours worked and pay rate " << "for " << NUM_EMPLOYEES << " employees: \n";
    for (count = 0; count < NUM_EMPLOYEES; count++)
    {
        //get the employee's pay rate
        cout << "employee #" << (count+1) << "pay rate: ";
        cin >>prrate;
        employees[count].setPayRate(prrate);

        //get the employee's hours worked
        cout << "Employee #" << (count+1) << " hours worked: ";
        cin>>prhours;
        employees[count].setHours(prhours);
    }

    //display the total pay for each of employee
    cout << "Total pay: \n";
    for(count = 0; count < NUM_EMPLOYEES; count++)
    {
        cout << "\t Employee # " << (count+1) << ": ";
        cout << employees[count].getTotalPay() << endl;
    }
    return 0;
}