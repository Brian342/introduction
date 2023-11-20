/*write a program that computes the area and circumference of a circle in functions*/
#include<iostream>
#include<cmath>
using namespace std;

double area(double radius)
{
    double area;
    const double pi = 3.142;
    return area = pi * radius * radius;
}
double circumference(double radius){
    double circumference;
    const double pi = 3.142;
    return circumference = 2 * pi * radius;
}

int main(){
    double radius;
    
        cout<<"Enter the radius->";
        cin>>radius;

        cout<<"Area is->"<<area(radius)<<endl;
        cout<<"circumference is->"<<circumference(radius)<<endl;

    return 0;
}

   
