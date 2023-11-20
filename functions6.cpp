/*Write a program that prompts the user for two numbers. 
The program then prompts the user for the operator (+, - , * , / or %). 
The user is the given the answer depending on the operator entered. If he enters an invalid operator, 
he/she should get an error message. See sample dialog below.
Sample Dialog
Enter two numbers: 12 15
Enter an operator: +
12 + 15 = 27*/
#include<iostream>
using namespace std;

int calculate_oper(char oper,int num1,int num2);

int main()
{
    char oper;
    int num1;
    int num2;
     cout<<"Type of operator available are(+,-,*,/,%)"<<endl;

            cout<<"Kindly select the Operator->"<<endl;
            cin>>oper;
            cout<<"Enter the two Numbers";
            cin>>num1>>num2;

    calculate_oper(oper,num1,num2);
}

int calculate_oper(char oper,int num1,int num2){

    int calculate_oper;

        switch(oper)
        {
            case '+':
                cout<<num1<< "+" <<num2<< "=" << (num1 + num2);
                break;
             case '-':
                cout<<num1<< "-" <<num2<< "=" << (num1 - num2);
                break;
             case '*':
                cout<<num1<< "*" <<num2<< "=" << (num1 * num2);
                break;
             case '/':
                cout<<num1<< "/" <<num2<< "=" << (num1 / num2);
                break;
             case '%':
                cout<<num1<< "%" <<num2<< "=" << (num1 % num2);
                break;
            default:
                 cout<<"Invalid operator";
            break;
        }
        return calculate_oper;
}