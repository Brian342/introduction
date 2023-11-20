//Write a program that accepts temperature in degrees Celsius and converts and outputs it in degrees Fahrenheit.
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double temp,convert_celsius_to_fahrenheit;

    cout<<"Enter temp in degree celsius->";
    cin>>temp;

    convert_celsius_to_fahrenheit = (temp * (0.9/0.5))+32;

    cout<<"The output of the conversion is->"<<convert_celsius_to_fahrenheit<<"fahrenheit";

    return 0;

}
