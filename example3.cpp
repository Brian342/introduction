//Write a program that accepts the width and length of a rectangle and computes both it’s area and perimeter.
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double width,length,area,perimeter;

    cout<<"Enter the width->";
    cin>>width ;
    cout<<"Enter the length->";
    cin>>length ;


    area = length * width;
    perimeter = 2 * (length+width);

    cout<<"the area of the triangle is->" << area << endl
        <<"the perimeter of the triangle is->" <<perimeter ;
    
    return 0;

}