/*Write a program that accepts measurements in kilometers and the converts and displays them in metres. 
E.g. if someone enters 0.4 (kilometers) 
the output should take the form 0.4 kilometers = 400 metres.*/
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double kilometers,metres,convert_km_meters;

    cout<<"Enter the kilometers->";
    cin>>kilometers;

    convert_km_meters = kilometers * 1000;

    cout<<kilometers << " kilometers" " = " <<convert_km_meters<< " metres";

    return 0;

}
