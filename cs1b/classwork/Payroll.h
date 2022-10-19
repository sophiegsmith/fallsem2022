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
    Payroll();
    Payroll(double hours, double payRate);
    ~Payroll(); 
    //setting the values called mutators
    void setHours(double hours);
    void setPayRate(double payRate);

    //get the values accessor
    double getHours(double)const;
    double getPayRate(double)const; 
    double getTotalPay(double)const;

    //void display
    void displayPayRoll()const;
};