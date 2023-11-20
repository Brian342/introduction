/*Write a program that accepts a number and then outputs it’s square, cube, square root and cube root.*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double num,square,squareroot,cuberoot;

    cout<<"Enter number->";
    cin>>num;

    square = pow (num , 2);
    squareroot = sqrt(num);
    cuberoot = cbrt(num);

    cout <<" the square of the number is->" << square << "\n"
            "squareroot->"<< squareroot << "\n"
            "cuberoot->"<< cuberoot << "\n";

    return 0;

}