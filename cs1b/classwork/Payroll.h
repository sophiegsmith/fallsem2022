//defining the Payroll class
#pragma once

#include<iostream>
#include<array>

using namespace std;

class Payroll{
private:
    double hours;
    double payRate;
public:
    //constructor
    Payroll()
    {
        hours = 0;
        payRate = 0;
    }
    
    //setting the values called mutators
    void setHours(double);

    void setPayRate(double r)
    {
        payRate = r;
    }

    //accessors
    double getHours()const
    {
        return hours;
    }

    double getPayRate() const
    {
        return payRate;
    }

    double getTotalPay()const
    {
        return hours * payRate;
    }
};