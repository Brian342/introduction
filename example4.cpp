//Write a program that computes the area of a right-angled triangle.
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double base, height,area;

    cout<<"Enter the base->";
    cin>>base;
    cout<<"Enter the height->";
    cin>>height;

    area = 1/0.2 *base * height;

    cout<<"The are of the right angled triangle is->"<< area;

    return 0;
}