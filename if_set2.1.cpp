/* In a certain organization, people are taxed using the following tax bracket.
Salary
Tax rate
>= 20000                15%
10000 – 20000           10%
0 – 10000               Not taxed
Write a program that accepts someone’s salary and computes both their tax amount and net salary (Gross – tax)*/
#include<iostream>
using namespace std;

int main()
{
    double salary;
    double tax_amount,net_salary,gross;

    cout<<"Enter the salary->";
    cin>>salary;

    if( salary >=20000 ) {
    tax_amount = salary * 0.15;
    net_salary = salary - tax_amount;

    cout<<"The tax_amount is->"<<tax_amount<<endl;
    cout<<"\nThe net_salary is->"<<net_salary;
    }
    else if(salary > 10000 && salary <20000 )
    {
    tax_amount = salary * 0.1;
    net_salary = salary - tax_amount;

    cout<<"The tax_amount is->"<<tax_amount<<endl;
    cout<<"\n The net_salary is->"<<net_salary; 
    }
    else if(salary >= 0 && salary < 10000 )
    {
    tax_amount = salary * 0 ;
    net_salary = salary - tax_amount;

    cout<<"Not taxed ";
    cout<<"\nThe net_salary is->"<<net_salary;
    }
    else{
        cout<<"Not on the tax rate brackets";
    }
    return 0;
}