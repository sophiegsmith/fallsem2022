#pragma once

#include<iostream>
#include<string>

using namespace std;

class Book
{
private:
    double wholeSalesCost;
    string title; 
public: 
    ~Book();
    Book();
    Book(double wholeSalesCost, string title); 
    void setwholeSalesCost(double wholeSalesCost); //be using in main, assign to private and use the program
    void setTitle(string t)
    {
        title = t; 
    } //these will set the values when user in main uses program, ex of inline

    double getwholeSalesCost()const; //if getting it, not gonna be changing anything always good idea to put constant so it doesnt allow anyone to change the value
    string getTitle()const; 

    double calcRetailCost(); 

    void displayBook();
};

//these are private meaning no one can change these values, use it but not change these variables
    //not initialized because its a tool to use them
    //every object create in main, will have these attributes
    //all these objects will inherit isbn and a title
    //meaning people who use this program will get these functions and use if for their program
    //default constructor //one default, and many overloaded as you wish
    //overloaded constructor, but parameters or data types will be different
    //~Book(); //this is a destructor and you  can only have one, it happens at the very end of a program
    //if there is nothing in public, a default constructor and default destructor will be automatically created when compiled
    //if have things in public with no destructor, it will create it for you