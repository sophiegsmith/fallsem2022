/*
Name: Sophie Smith
LAB: 3B
Instructor: Med mogasemi
*/
#include "headerlab3b.h"
#include<iostream>
#include<string>

using namespace std;

//function prototypes
void setInvoice(Invoice& invoice);
void displayInvoice(Invoice& invoice); 

//main function
int main()
{
    Invoice inv_1 = {0, 0.0, '0'};
    Invoice inv_2 = {0, 0.0, '0'};
    char choice;

    do {
        setInvoice(inv_1);
        setInvoice(inv_2);

        displayInvoice(inv_1);
        displayInvoice(inv_2);
        cout << "Do it again? (Y/N):";
        cin >> choice;
        if (choice == 'n' || choice == 'N')
        {
            //clear the screen
            cout << "okay all done." << endl;
            break;
        }
        //on mac os no cls command, 
        system("clear");
    } while (true);
    

    return 0;
}

void setInvoice(Invoice& invoice)
{
    cout << "Enter invoice number: ";
    cin>> invoice.invoiceNum;
    cout << "Enter the amount: ";
    cin >> invoice.amt;
    cin.ignore();
    cout << "Is the amount paid (y/n): ";
    cin >> invoice.paid;
}

void displayInvoice(Invoice& invoice)
{
    cout << "INVOICE #: " << invoice.invoiceNum << endl;
    cout << "AMOUNT: " << invoice.amt << endl;
    cout << "PAID (y/n): " << invoice.paid << endl;
    
}

/* 
OUTPUT:
Enter invoice number: 1000
Enter the amount: 220.23
Is the amount paid (y/n): y
Enter invoice number: 1001
Enter the amount: 123.75
Is the amount paid (y/n): n
INVOICE #: 1000
AMOUNT: 220.23
PAID (y/n): y
INVOICE #: 1001
AMOUNT: 123.75
PAID (y/n): n
Do it again? (Y/N): N
okay all done.
*/