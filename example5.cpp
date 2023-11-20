/* Write a program that accepts measurements in cm and converts them into metres. If someone enters 200 for example, 
the output should take the form;
200 cm = 2 metres.*/
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double number,convert_cm_to_metre;

    cout<<"Enter the number in cm->";
    cin>>number;

    convert_cm_to_metre =number/100;

    cout<<"The value number is->"<< convert_cm_to_metre << " metres";

    return 0;
}