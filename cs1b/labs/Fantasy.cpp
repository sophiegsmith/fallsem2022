#include"Fantasy.h"

Fantasy::Fantasy()
{
    author = " ";
}

Fantasy::~Fantasy(){}

Fantasy::Fantasy(string author, double wholeSalesCost, string title):Book(wholeSalesCost, title)
{
    this->author=author; 
}