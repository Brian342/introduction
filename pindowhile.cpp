#include<iostream>
using namespace std;

int main()
{
    int userPin=1234, pin , errorcount = 0;

    do{
        cout<<"Pin: ";
        cin>>pin;
        if(pin!=userPin)
        //cout<<"Wrong pin try again\n";
        errorcount++;

    }while(errorcount<3 && pin!=userPin);
       
    if(errorcount<3)
    {
        cout<<"Loading...";
    }
    else 
    {
        cout<<"Blocked!";
    }

    return 0;
}