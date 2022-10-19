//name: sophie smith
#include<iostream>

using namespace std;

//function protoypes
double getBalance(double);
double getDeposit(double);
double getNewbalance(double, double);
void displayBalance(double, double);

int main()
{
    double getbalance = 0;
    double getdeposit = 0;
    double newbalance = 0;

    getbalance = getBalance(getbalance);
    getdeposit = getDeposit(getdeposit);
    newbalance = getNewbalance(getbalance, getdeposit);
    displayBalance(newbalance, getdeposit);

    return 0;
}
double getBalance(double getbalance)
{
    cout << "Enter your bank balance: ";
    cin >> getbalance;
    return getbalance;
}

double getDeposit(double getdeposit)
{
    cout << "Enter a deposit: ";
    cin >> getdeposit;
    return getdeposit;
}

double getNewbalance(double getbalance, double getdeposit)
{
    return (getbalance + getdeposit);
}

void displayBalance(double newbalance, double getdeposit)
{
    cout << "With a deposit of " << getdeposit << ". ";
    cout << "Your new balance is: " << newbalance;
}


/* output
Enter your bank balance: 1000.50
Enter a deposit: 499.50
With a deposit of 499.5. Your new balance is: 1500
*/