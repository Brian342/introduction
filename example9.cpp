/* Write a program that accepts the weight of a package in grams and 
then converts it to kilograms and also specifies how many such packages form one kilogram. 
For example, if the user enters the weight (in grams) of the package as 100, the output should be;
The weight of the package is 0.1 kilograms.
It takes 10 such packages to form one kilogram.*/
#include<iostream>
using namespace std;

int main()
{
    double convertgramstokilograms;
    int  weight;
    
    cout<<"Enter the weight(in grams)";
    cin>>weight;

    convertgramstokilograms = static_cast<double>(weight) /1000;

    cout<<"the weight of the packet is"<< convertgramstokilograms << " kilograms" << endl;

    if ( weight % 1000 == 0)
    {
        cout <<"it takes " << ( weight / 1000)<< "such packets to form one kilogram" << endl;

    }
    else{
        cout <<"it takes "<< (1000 / (weight % 1000)) <<"such packects to form one kilogram";
    }



    return 0;

}