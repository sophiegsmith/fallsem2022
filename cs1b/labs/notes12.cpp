//classes
//#include<iostream>
#include"Book.h"



int main()
{
    int bookIsbn = 0;
    string bookTitle = " ";

//this is calling, declaring a object of book and specifically calling default constructor
//call class, memory is allocatated
    Book b1;
    Book b2(123456, "My Book"); //call overloaded constructor
    Book b3 (9876, "your book"); 

    //display b1
    cout << "Book b1: \n"; //this will 
    b1.displayBook();

    cout << "Book b2: \n"; //this will 
    b2.displayBook();

    cout << "Book b3: \n"; //this will 
    b3.displayBook();

    //user input
    cout << "Please enter the isbn: ";
    cin >> bookIsbn;
    //set the value
    b1.setIsbn(bookIsbn);

    cout << "Please enter the title: ";
    cin.ignore();
    getline(cin, bookTitle); 
    b1.setTitle(bookTitle);


    return 0; 
}