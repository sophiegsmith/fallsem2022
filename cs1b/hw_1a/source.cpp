#include<iostream>

using namespace std;

//function prototype
double getsalesamt(double);
double calccomission(double);
double calcpay(double);
void displaypay();

//global variables

//main function
int main()
{
    //assign variables
    double saleamt = 0.0;
    double comission = 0.0;
    double pay = 0.0;
    double total = 0.0;

    //call function
    saleamt = getsalesamt(double);
    comission = calccomission(double);
    pay = calcpay(double);
    total = displaypay();
    return 0;
}

double getsalesamt(double saleamt)
{
    cout << "Enter your monthly sales amount: ";
    cin >> saleamt;
    return saleamt;
}

double calccomission(double commision,double salesamt)
{
    double rate = 0.0;
    if (saleamt > 50000)
        else commision = 0.02;
    if (saleamt > 25000 || saleamt < 50000)
        else commision = 0.015;
    if (saleamt < 25000)
        else comission = 0.0;
}

double calcpay(double pay,double salesamt)
{
    pay = saleamt * comission; 
    return pay;
}

void displaypay(double total)
{
    cout << "the monthly salary is: " << total;
}