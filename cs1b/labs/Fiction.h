#pragma once

#include "Book.h"

class Fiction:public Book{
private:
    string genre;

public:
    ~Fiction(); //destructor
    Fiction(); //default constructor
    Fiction(string genre, double wholeSalesCost, string title); //overloaded constructor

};






//member variables be able to use