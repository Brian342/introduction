/*calculate the area and circumference of a circle.*/
#include<iostream>
#include<cmath>
using namespace std;

struct circle
{
    double radius;
    
};
int main ()
{       circle mystruct;
        int area,circumference;
        const double pi = 3.142;
        cout<<"Enter the radius->";
        cin>>mystruct.radius;

    area = 2 * mystruct.radius * mystruct.radius;
    circumference = 2 * pi * mystruct.radius; 

    cout<<"the area is->"<<area<<endl;
    cout<<"the circumference is->"<<circumference;

    return 0; 

}
