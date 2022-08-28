#include<iostream>

using namespace std;

//function prototype
void gettemps(int&, int&, int&);
int calcavg(int, int, int);
void displayavg(int);

//main function
int main()
{
    //variables
    int temp1, temp2, temp3 = 0;
    int count = 1;
    int avg = 0;
    cout << "Please enter 3 different temperatures: ";
    //call functions
    gettemps(temp1, temp2, temp3);
    avg = calcavg(temp1, temp2, temp3);
    displayavg(avg);
    return 0;
}

void gettemps(int& temp1, int& temp2, int& temp3)
{
    int count = 1;
	cout << "Plese enter temperature 1: " << temp1 << endl;
	cin >> temp1;

	count++;
	cout << "Plese enter temperature 2: " << temp2 << endl;
	cin >> temp2;

	count++;
	cout << "Plese enter temperature 3: " << temp3 << endl;
	cin >> temp3;
}

int calcavg(int temp1, int temp2, int temp3, int avg)
{
    avg = (temp1 + temp2 + temp3)/3;
    return avg;
}

void displayavg(int avg)
{
    cout << "The average temperature is: " << avg << endl;
}