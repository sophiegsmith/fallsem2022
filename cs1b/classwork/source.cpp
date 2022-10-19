#include "Payroll.h"

int main()
{
    //define an instance of the Payroll class
    Payroll payroll;
    //local variable for the hours
    double prhours;
    //local variable for the pay rate
    double prrate;
    //local varaible for the total pay
    double totalpay;

    //get the rate and hours from the user
    cout << "Enter the payrate and hours for 7 employees.\n";
    for (int i = 0; i < 7; i++)
    {
        cout << "Employee # " << i+1 << "pay rate: ";
        cin >> prrate;
        cout << "Employee # "<<i+1 << " hours worked: ";
        cin >> prhours;
    }

    //store the rate and hours of the employees into the payroll object
    payroll.setPayRate(prrate);
    payroll.setHours(prhours);

    //get the total pay for the 7 employees
    cout << "Total pay: \n";
    totalpay = prrate * prhours;
    for (int i = 0; i < 7; i++)
    {
        cout << "Employee # " << i +1 << totalpay;
    }
    payroll.getTotalPay(totalpay);

    //display the Employee's data

    return 0;
}