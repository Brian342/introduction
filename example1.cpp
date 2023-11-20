//Write a program that accepts three numbers and computes their sum, product and average. 
#include<iostream>

using namespace std;

int main()

{
    int num1,num2,num3;
    double sum,product,average;

    cout<<"Enter num1->";
    cin>>num1;
    cout<<"Enter num2->";
    cin>>num2;
    cout<<"Enter num3->";
    cin>>num3;



    sum =num1+num2+num3;
    product =num1*num2*num3;
    average =sum/3.0;

    cout<<"the sum of the 3 num is->"<< sum << "\n"
    <<"the product is->"<< product << "\n"
    <<"the average is->" << average << endl;

    return 0;
    
}