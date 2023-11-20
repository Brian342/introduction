/* The value of y is calculated as follows:-
y = 4x3 + 2x – 6                           when x > 5
y = 3x2 – 4y + 12                          when x < 5
y = 6x – 5                                 when x = 5
Write a program that accepts the value x and then computes the value of y.*/
#include<iostream>
#include<cmath>
using namespace std;

int main ()
{
    int x,y;

    cout<<"Enter the value of x->";
    cin>>x;

    if(x > 5)
    {
        y = 4 * pow(x,3) + 2 * (x) - 6;
        cout<<"The value of x is->"<< x << endl;
        cout<< "\n The value of y is->" << y << endl ;
    }
    else if( x < 5 )
    {
        y = 3 * pow(x,2) - 4 * (x) + 12;
        cout<<"The value of x is->" << x << endl;
        cout<<"The value of y is->" << y << endl;
    }
    else if (x == 5)
    {
        y = 6 * (x) - 5;
        cout<<"The value of x is->" << x << endl;
        cout<< "The value of y is->" << y << endl;

    }
    else 
    {
        cout<<"Not on the requred value gap";

    }

    return 0;

}