#include<iostream>
using namespace std;
/*Enter 3 sides of a triangle and tell is its equalateral,isosles or scalen */

int main()
{
    float weight,height,bmi;
    cout<<"Enter the weight(kg)->";
    cin>>weight;
    cout<<"Enter the height(m)->";
    cin>>height;

    bmi = weight / (height * height) ;

    if(bmi < 18.5)
    {
        cout<<"You are underweight";
    }
    else if(bmi > 25 )
    {
        cout<<"You are overweight";
    }
    else 
    {
        cout<<"You are normal";
    }
    cout<<" your bmi is->"<< bmi << " &  weight is "<< weight;

    
return 0;
}
