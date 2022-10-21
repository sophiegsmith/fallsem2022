//implementation file for the Payroll class
#include"Payroll.h"
void Payroll::setHours(double h)
{
    if (h > 60)
    {
        cout << "Invalid number of hours.\n";
        exit(EXIT_FAILURE);
    }
    else
        hours = h;
}