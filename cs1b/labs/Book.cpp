#include "Book.h"
//angled brackets or double quotation is user created hearder file
//this will have definition of functions

//we are going to define it
Book::Book(){
    //here to initialize variable--> every object you create will inherit member functions and member varaibles
    wholeSalesCost = 0.0;
    title = " ";
}

//overloaded destructor
Book::Book(double wholeSalesCost, string title) //every function has its own this operator
{
    this -> wholeSalesCost = wholeSalesCost; //each object will have its own this operator //look at this-> later
    this -> title = title; //name it the same for this
}

Book::~Book(){}
    //cout << "see ya later alligator. \n";}

//defintions of our functions
//in main, you are setting these functions
void Book::setwholeSalesCost(double wholeSalesCost)
{
    this->wholeSalesCost = wholeSalesCost; //dont need this if its something else isbn = i
}

//in main, you are getting
double Book::getwholeSalesCost()const
{
    return wholeSalesCost;
}

string Book::getTitle()const
{
    return title;
}


double Book::calcRetailCost()
{
    return (wholeSalesCost * 1.5); 
}
//lastly void
void Book::displayBook() //in line function meaning one line statement
{
    cout << "Retail Cost: " << calcRetailCost() << endl 
         << "Title: " << title << endl;
}

//every object has its own this operator since they are independent from one another
