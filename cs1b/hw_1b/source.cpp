#include<iostream>
#include<string>

using namespace std;

//function prototype
int gettemps(int, int, int);
int calcavg(int);
void displayavg();

//main function
int main()
{
    int temp1, temp2, temp3 = 0.0;
    //use an array to get temps
    //temp1 = gettemps(double temp1);
    //temp2 = gettemps(double temp2);
    //temp2 = gettemps(double temp3);

    int avg = 0.0;
    int sum=0;
    //avg = calcavg(int avg);

    displayavg();
    return 0;
}

//functions
int gettemps(int temp1, int temp2, int temp3)
{
    if (int i = 0, i < 3, i++)
    {
        cout << "Enter 3 temperatures: ";
    }
    return temp1, temp2, temp3;
}

int calcavg(int avg, int sum, int temp1, int temp2, int temp3)
{
    sum = temp1 + temp2 + temp3;
    avg = sum/3;
    return avg;
}

void displayavg(int avg)
{
    cout << "Temp 1:   \n";
    cout << "Temp 2:   \n";
    cout << "Temp 3:   \n";
    cout << "The average of all 3 temps is:  " << avg <<endl;
}
