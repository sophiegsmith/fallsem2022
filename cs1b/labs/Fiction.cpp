#include"Fiction.h" //this is the inherited class

Fiction::Fiction()
{
    genre = " ";
}

Fiction::Fiction(string genre, double wholeSalesCost, string title):Book(wholeSalesCost, title)
{
    this->genre=genre;
}

Fiction::~Fiction(){}
