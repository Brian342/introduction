/*In a certain organization, people are taxed using the following tax bracket.
Salary                                  Tax rate
>= 20000                                    15%
10000 – 20000                               10%
0 – 10000                                   Not taxed
Write a program that accepts someone’s salary and computes both their tax amount and net salary (Gross – tax)*/
#include<iostream>
using namespace std;

int tax_amount(double gross_salary){

         int tax_amount;

         if(gross_salary>=20000)
         {
            tax_amount=gross_salary * 15.0/100;
         }
         else if(gross_salary>=10000 && gross_salary<20000)
         {
            tax_amount=gross_salary * 10.0/100;
         }
         else if(gross_salary>=0 && gross_salary<10000)
         {
            cout<<"Not taxed ";
         }

    return tax_amount;
}

int main(){
    double gross_salary;
    double net_salary;

    cout<<"Enter the gross_salary->";
    cin>>gross_salary;

    net_salary=gross_salary-tax_amount(gross_salary);

        cout<<"The Tax_amount is->"<<tax_amount(gross_salary)<<endl;
        cout<<"The net_salary is->"<<net_salary;

return 0;
}

       
