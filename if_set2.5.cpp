/* A number is said to be evenly divisible by 9 if it is divisible by 9 and at the same time it is even. 
For example 18 is evenly divisible by 9 but 27 is not. 
A program is required that accepts an integer and checks whether it is evenly divisible by 9 or not 
and then prints an appropriate message.
*/
#include<iostream>
using namespace std;


int main()
{
    int num ;
    cout<<"Enter the number->";
    cin>>num;

    if(num % 9 == 0 && num % 2 == 0)
    {
        cout<<"The number is divisible by 9 and also even";

    }
    else if (num % 9 == 0 && num % 2 != 0)
    {
        cout<<"The number is divisible by 9 but odd number";
    }

    return 0;
    
}