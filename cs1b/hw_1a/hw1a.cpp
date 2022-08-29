// Attached: HW_1(a)
// File: source.cpp
// =============================================================================
//
// Programmer: Sophie Smith
// Class: CS 1A
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Get Sale (HW_1a)
// =============================================================================
// Description:
// User inputs a monthly salary
// program returns a calculated comission, avg,
// and display
// =============================================================================
// =============================================================================
#include<iostream>

using namespace std;

//function prototype
double getsalesamt(double);
double calccomission(double, double);
double calcpay(double, double, double,double);
void displaypay(double);


// ==== main ===================================================================
//
// =============================================================================
int main()
{
    //Declaring variables
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
} // end of main()

// ======= getsalesamt ============================================================
//this function prompts for sales amt
//
// Input:
// double rep sales amt
// 
//
// Output:
// returns a double representing sales amt
// =============================================================================
double getsalesamt(double salesamt)
{
    cout << "Enter your monthly sales amount: ";
    cin >> salesamt;
    return salesamt;
} //end

// ======= displayavg ============================================================
//this function calculates comission
//
// Input:
// double comission amt and double sales amt
// 
//
// Output:
// comission to main
// =============================================================================
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
} //end

// ======= calcpay ============================================================
//this function calculates pay
//
// Input:
// double pay, double salesamt, double comission, double totalsalesamt
// 
//
// Output:
// double represtent pay
// =============================================================================
double calcpay(double pay,double salesamt, double commission, double totalsaleamt)
{
    totalsaleamt = salesamt * commission;
    pay = salesamt + totalsaleamt;
    return pay;
} //end

// ======= displayavg ============================================================
//this function displays the monthly pay
//
// Input:
// double pay amout
// 
//
// Output:
// displays the pay to cout
// =============================================================================
void displaypay(double pay)
{
    cout << "The monthly salary pay is: " << pay;
}
//end 

/*================================== Output ===================================
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