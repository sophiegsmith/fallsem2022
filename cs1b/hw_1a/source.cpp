#include<iostream>

using namespace std;

//function prototype
double getsalesamt(double);
double calccomission(double, double);
double calcpay(double, double, double,double);
void displaypay(double);

//global variables

//main function
int main()
{
    //assign variables
    double salesamt = 0.0;
    double comission = 0.0;
    double pay = 0.0;
    double totalsaleamt = 0.0;
    double total;

    //call function
    
    salesamt = getsalesamt(salesamt);
    comission = calccomission(comission,salesamt);
    pay = calcpay(pay, salesamt, comission, totalsaleamt);
    displaypay(pay);
}

double getsalesamt(double salesamt)
{
    cout << "Enter your monthly sales amount: ";
    cin >> salesamt;
    return salesamt;
}

double calccomission(double commision,double salesamt)
{
    if (salesamt >= 50000)
        commision = 0.02;
    if ((salesamt < 50000) && (salesamt > 25000))
        commision = 0.015;
    if (salesamt < 25000)
        commision =  0;
        cout << "The commission is: " << commision << endl;
    return commision; 
}

double calcpay(double pay,double salesamt, double commission, double totalsaleamt)
{
    totalsaleamt = salesamt * commission;
    pay = salesamt + totalsaleamt;
    return pay;
}

void displaypay(double pay)
{
    cout << "The monthly salary pay is: " << pay;
}

//output
/*
Enter your monthly sales amount: 50000
The commission is: 0.02
The monthly salary pay is: 51000

Enter your monthly sales amount: 25000
The commission is: 0
The monthly salary pay is: 25000                                                                                                               

Enter your monthly sales amount: 60000
The commission is: 0.02
The monthly salary pay is: 61200
*/