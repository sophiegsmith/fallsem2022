#include "Payroll.h"
//defining the class

Payroll::Payroll()
{
    hours = 0.0;
    payRate = 0.0;
}
Payroll::Payroll(double hours, double payRate){
    hours = hours;
    payRate = payRate;
}

Payroll::~Payroll(){
    cout << "Bye bye.\n";
}

Payroll::setHours(double h)
{
    hours = h;
}

Payroll::setPayRate(double r)
{
    payRate = r;
}

Payroll::getHours()const
{
    return hours;
}

Payroll::getPayRate()const
{
    return payRate;
}

Payroll::getTotalPay()const
{
    return (hours * payRate);
}

void Payroll::displayPayRoll()const
{
    cout << "Employee #" << "payrate: " << payRate << endl 
        << "Employee #" << " hour worked: " << hours <<endl;
}

