#pragma once
#include"Book.h"

class Fantasy:public Book{
private:
    string author;
public:
    ~Fantasy();
    Fantasy();
    Fantasy(string author, double wholeSalesCost, string title);
};