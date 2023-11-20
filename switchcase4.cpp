/* Write a program to read a value from the keyboard and output the phrase NEGATIVE 
if the number is negative, POSITIVE if the number is positive or ZERO otherwise.*/
#include<iostream>
using namespace std;

int main ()
{
    int value;

    cout<<"Enter value->";
    cin>>value;

    switch (value)
    {
    case 1:
        value < 0;
        cout<<"Negative";
        break;

    case 2:
    value > 0;
    cout<<"Positive";

    default:
    cout<<"Zero";
        break;
    }
    return 0;
}