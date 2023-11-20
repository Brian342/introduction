/* Write a program that accepts two numbers and divides the bigger number by the smaller number and displays the results. 
The program should display an error message (and not perform the calculation)
if the smaller number is zero.*/
#include<iostream>
using namespace std;

int main()
{
    float num1,num2;

    cout<<"Enter two numbers->";
    cin>> num1 >> num2 ;

    if( num1 > num2) 
    {
        cout<<"The result is->"<< num1 / num2;

    }
    else if(num1 < num2)
    { 
        cout<<"The result is->"<< num2 / num1;
    }
    else if (num1 == 0 || num2 == 0)
    {
        cout<<"Error message";
    }

    return 0;

}