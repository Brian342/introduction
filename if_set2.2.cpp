/* In a certain organization, 
employees are taxed depending on their gender and amount of 
money they earn. The criterion is shown below.
Employee                             Tax Rate
Female earning < 15000                  12%
Female earning >= 15000                 14%
Male earning < 14000                    13%
Male earning >= 14000                   15%
a) Write a program to implement the above.*/
#include<iostream>
using namespace std;

int main()
{
    int gender,male,female;
    double amount, tax_rate,net_salary;


    cout<<" * * kindly select your gender * *";
    cout<< " \n 1)    male ";
    cout<<" \n  2)    female";

    cout<<" \n select the gender ->";
    cin>>gender;
    cout<<"Enter the amount->";
    cin>>amount;

    if(gender == 1 && amount >= 14000)
    {
        tax_rate = amount * 15.0/100;
        net_salary = amount - tax_rate;

        cout<<"The tax rate is->" << tax_rate << "The net_salary is->"<< net_salary << endl;
    }
    else if(gender == 1 && amount < 14000)
    {
        tax_rate = amount * 0.13;
        net_salary = amount - tax_rate;

        cout<<"The tax rate is->" << tax_rate << "The net_salary is->"<< net_salary << endl;
    }
    else if (gender == 2 && amount >= 15000)
    {
        tax_rate = amount * 0.14;
        net_salary = amount - tax_rate;

        cout<<"The tax rate is->" << tax_rate << "The net_salary is->"<< net_salary << endl;
    }
    else if (gender == 2 && amount < 15000)
    {
        tax_rate = amount * 0.12;
        net_salary = amount - tax_rate;

        cout<<"The tax rate is->" << tax_rate << "The net_salary is->"<< net_salary << endl;
    }
    return 0;
    }
    


