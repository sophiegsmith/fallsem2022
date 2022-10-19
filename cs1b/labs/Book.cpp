#include "Book.h"
//angled brackets or double quotation is user created hearder file
//this will have definition of functions

//we are going to define it
Book::Book(){
    //here to initialize variable--> every object you create will inherit member functions and member varaibles
    isbn = 0;
    title = " ";
}

//overloaded destructor
Book::Book(int isbn, string title) //every function has its own this operator
{
    this -> isbn = isbn; //each object will have its own this operator //look at this-> later
    this -> title = title; //name it the same for this
}

Book::~Book(){
    cout << "see ya later alligator. \n";
}

//defintions of our functions
//in main, you are setting these functions
void Book::setIsbn(int isbn)
{
    this->isbn = isbn; //dont need this if its something else isbn = i
}

void Book::setTitle(string s)
{
    title = s;
}

//in main, you are getting
int Book::getIsbn()const
{
    return isbn;
}

string Book::getTitle()const
{
    return title;
}

//lastly void
void Book::displayBook()const //in line function meaning one line statement
{
    cout << "ISBN: " << isbn << endl 
         << "Title: " << title << endl;
}

//every object has its own this operator since they are independent from one another
