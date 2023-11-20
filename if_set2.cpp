/* Write a program that accepts an integer and checks whether 
it is even or odd and then prints an appropriate message*/
#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Enter a num->";
    cin>>num;

    if( num % 2 == 0)
    {
        cout<<"Even number!";
    }
    else 
    {
        cout<<"Odd number!";
    }
    

    return 0;

}