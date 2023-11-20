/* Write a program that accepts two numbers and divides 
the bigger number by the smaller number and displays the results. 
The program should display an error message (and not perform the calculation) 
if the smaller number is zero.*/
#include<iostream>
using namespace std;

int main()
{
    int x,y,calculate;

    cout<<"Enter 2 numbers->";
    cin>> x >> y ;

    switch (calculate)
    {
    case 1 :
    if(x > y  )
    cout<< x/y;
        break;
    case 2:
     if (x == 0 || y == 0)
     cout<<"Error message";

    default:
        break;
    }
    return 0;
}