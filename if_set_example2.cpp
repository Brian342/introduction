/* Write a program using the tax information below: -
Gross Pay                  ​      Tax Rate
Over 40,000                       ​30%
>= 30,000 but below 40,000        ​25%
>=20,000 but below 30,000         ​15%
>=10,000 but below 20,000         ​10%
Below 10,000                      ​no tax.
Write a program that accepts the gross pay and computes both 
the tax amount and the net pay. (Assume the net pay is gross pay – tax amount)*/

#include<iostream>
using namespace std;

int main()
{
    int gross_tax,tax_amount,gross_pay,net_pay;

    cout<<"Enter the gross pay->";
    cin>> gross_pay;

    if (gross_pay > 40000)
    {
        tax_amount = gross_pay * 30.0/100.0;
        net_pay = gross_pay - tax_amount;

        cout<<"The tax_amouunt is->"<< tax_amount << endl;
        cout<<"The net_pay is->"<< net_pay << endl;
    }
    else if (gross_pay >= 30000 && gross_pay < 40000)
    {
        tax_amount = gross_pay * 25.0/100.0;
        net_pay =gross_pay - tax_amount;

        cout<<"The tax_amouunt is->"<< tax_amount << endl;
        cout<<"The net_pay is->"<< net_pay << endl;
    }
    else if (gross_pay >= 20000 && gross_pay < 30000)
    {
        tax_amount = gross_pay * 15.0/100.0;
        net_pay = gross_pay - tax_amount;

        cout<<"The tax_amouunt is->"<< tax_amount << endl;
        cout<<"The net_pay is->"<< net_pay << endl;
    }
    else if (gross_pay >= 10000 && gross_pay < 20000)
    {
        tax_amount = gross_pay * 10.0/100.0;
        net_pay =gross_pay -tax_amount;

        cout<<"The tax_amouunt is->"<< tax_amount << endl;
        cout<<"The net_pay is->"<< net_pay << endl;
    }
    else if( gross_pay < 10000)
    { 
        cout<<"No tax";
    }

    else
    {
        cout<<"Not applicable";
    }
    return 0;
}