/* Write a program that accepts measurements in cm and converts them into metres. If someone enters 200 for example, 
the output should take the form;
200 cm = 2 metres.*/
#include<iostream>
using namespace std;

struct measurement
{
    int cm;
};

int main()
{
    measurement mymeasure;
    int convert_Cm_Meters;

    cout<<"Enter the measurement in centimeters->";
    cin>>mymeasure.cm;

    convert_Cm_Meters = mymeasure.cm/100;

    cout<<"The measurement in meters is->"<<convert_Cm_Meters <<" metres";

    return 0;

}