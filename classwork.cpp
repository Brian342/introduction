/*write a program that accepts an integer and the power it should be raised to,perform the calculation and gives the answer
note do not use pow, sqrt or any math.h functions*/

#include<iostream>
using namespace std;

int main()
{
    int number;
    double root =1;
    int i = 0;

    cout<< "Enter the number";
    cin>>number;

    while(1)
    {
        i= i +1;
        root =(number /root +root) /2;
        if (i ==number +1) {break;}
    }
    cout<<root;
    
    return 0;
}
