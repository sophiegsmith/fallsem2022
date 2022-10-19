#pragma once

#include<iostream>
#include<string>

using namespace std;

class Book
{
private:
    int isbn;
    string title; //these are private meaning no one can change these values, use it but not change these variables
    //not initialized because its a tool to use them
    //every object create in main, will have these attributes
    //all these objects will inherit isbn and a title
public: //meaning people who use this program will get these functions and use if for their program
    //default constructor //one default, and many overloaded as you wish
    Book();
    Book(int isbn, string title); //overloaded constructor, but parameters or data types will be different
    ~Book(); //this is a destructor and you  can only have one, it happens at the very end of a program
    //if there is nothing in public, a default constructor and default destructor will be automatically created when compiled
    //if have things in public with no destructor, it will create it for you
    void setIsbn(int isbn); //be using in main, assign to private and use the program
    void setTitle(string); //these will set the values when user in main uses program

    int getIsbn()const; //if getting it, not gonna be changing anything always good idea to put constant so it doesnt allow anyone to change the value
    string getTitle()const; 

    void displayBook()const;
};