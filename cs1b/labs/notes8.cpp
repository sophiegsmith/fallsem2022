//recursion notes
#include<iostream>
#include<string>
#include<array>
#include<iomanip>

using namespace std;

//funtion prototype
void showNumber(int number);
int m(int x, int y);
double p(double z, double w);
int sum(int max);
void showOddNum( int num);
//main function
int main()
{
    //declare variables
    int number = 1;
    int num = 20;
    //ex 1
    showNumber(number);
    //ex 2 -> 7 * 4
    cout << m(7,4);
    cout << endl;
    //ex 3 --> 2^10
    cout << p(2, 10);
    cout << endl;
    //ex 4 --> add all the numbers from 1 to 50
    int max = 50; 
    cout << sum(max);
    //ex 5: add all the elements using a recursive function

    //reverse order
    showOddNum(num);
    return 0;
}

void showNumber(int number)
{
    if(number ==11)
    {
        return;
    }
    else
    {
        showNumber(number+1);
        cout<< number << endl;
    }
}

//7 * 4 using a recursive function
int m(int x, int y)
{
    if (x == 1)
    {
        return y; 
    }
    else
    {
        return y + m(x-1, y);
    }
}

//pow(2.0, 10.0)= pow(x,y) = x * pow(x, y-1)
double p(double z, double w)
{
    if (w > 0)
    {
        return z * p(z, w-1);
    }
    else
    {
        return 1; 
    }
}

//add from 1 to 50 using a recursive functionn
int sum(int max)
{
    if (max >0)
    {
        return max + sum(max -1);
    }
    else
    {
        return 0;
    }
}

void showOddNum( int num)
{
    if(num <= 20)
    {
        if (num % 2 == 1)
        {
             cout << num << " " << endl;
        }
       showOddNum(num - 1);
    }
}

//int array[] = {1, 2, 3, 4, 5, 6}