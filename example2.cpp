//Write a program that accepts the radius of a circle and computes both it’s area and circumference.
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double rad, area,circumference;
    const double pi = 3.142;

    cout<<"Enter the radius->";
    cin>>rad;

    area = pi * sqrt(rad);
    circumference = 2 * pi *rad;

    cout<<"the are is->"<< area <<"\n"
    <<"the circumference is->"<<circumference << endl;

    return 0;

}