#include<iostream>

using namespace std;

//function prototype
int getdimensions(int, int, int);
bool arevalid();
int calcvolume(int, int, int,int);
void displayvolume(int, int, int, int);
//main function
int main()
{
    //variables
    int width, length, depth = 0;
    int volume = 0;
    //call functions
    width = getdimensions(width);
    length = getdimensions(length);
    depth = getdimensions(depth);
    bool arevalidD();
    volume = calcvolume(width, length, depth, volume);
    displayvolume(width, length, depth, volume);
    return 0;
}

//functions
int getdimensions(int width, int length, int depth)
{
    cout << "Enter width of the pool: " << width << endl;
    cout << "Enter length of the pool: " << length << endl;
    cout << "Enter depth of the pool: " << depth << endl;
}

bool arevalid()
{

}

int calcvolume(int width, int length, int depth, int volume)
{
    volume = width * length * depth;
    return volume;
}

void displayvolume(int width, int length, int depth, int volume)
{
    cout << "Width: " << width << endl;
    cout << "length: " << length << endl;
    cout << "Depth: " << depth << endl;
    cout << "The volume is " << volume << " cubic feet." << endl;
}
