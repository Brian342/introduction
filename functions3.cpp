/*In a certain organization, employees are taxed depending on their gender and amount of money they earn.
 The criterion is shown below.
Employee                                Tax Rate
Female earning < 15000                      12%
Female earning >= 15000                     14%
Male earning < 14000                        13%
Male earning >= 14000                       15%
a) Write a program to implement the above.*/
#include<iostream>
using namespace std;

int tax_amount(double gender,int earning){
        int tax_amount;
          
    if(gender==1 && earning<15000)
    {
         tax_amount= earning * 12.0/100;
    }
    else if(gender==1 && earning>=15000)
    {
        tax_amount=earning * 14.0/100;
    }
    else if(gender==2 && earning<14000)
    {
        tax_amount=earning * 13.0/100;
    }
    else if(gender==2 && earning>=14000)
    {
        tax_amount=earning * 15.0/100;
    }
    else 
    {
        cout<<"Not on the tax bracket";
    }

    return tax_amount;

}
int main()
{
    int gender;
    int earning;

    cout<<"* * * kindly select your gender"<<endl;
    cout<<"1)   male"<<endl;
    cout<<"2)   female"<<endl;

    cout<<"select your gender(number)->";
    cin>>gender;

    cout<<"Enter your earning";
    cin>>earning;

    cout<<"your taxed depending on your gender is->"<<tax_amount(gender,earning);

    return 0;
}