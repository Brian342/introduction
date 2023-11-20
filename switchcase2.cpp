/* Write a program that prompts the user for two numbers. 
The program then prompts the user for the operator (+, - , * , / or %). 
The user is the given the answer depending on the operator entered. 
If he enters an invalid operator, he/she should get an error message. See sample dialog below.
Sample Dialog
Enter two numbers: 12 15
Enter an operator: +
12 + 15 = 27
 */
#include<iostream>
using namespace std;

int main()
{
    char oper;
    float num1,num2;

    cout<<"Enter num1->";
    cin>>num1;
    cout<<"Enter num2->";
    cin>>num2;
    cout<<"Enter any of this operator(+, -, *, /, %)->";
    cin>>oper;
    switch (oper)
    {
    case '+':
    cout<< num1 << " + " << num2 << " = "<< num1 + num2<< endl;
        break;
    case '-':
    cout<< num1 << " - " << num2 <<  " = " <<num1 - num2<< endl;
        break;
    case '*':
    cout<< num1 << " * " << num2 << " = "<<num1 * num2<<endl;
        break;
    case '/':
    cout<< num1 << " / " << num2 <<" = "<<num1 / num2 << endl;
        break;
    case '%':
       /*bool isnum1Int, isnum2Int;
        isnum1Int = ((int)num1 == num1);
        isnum2Int = ((int)num2 == num2);

        if(isnum1Int  && isnum2Int) */        
        cout<< num1 << " % " << num2 << " = "<< (int)num1 % (int)num2 << endl;       
    /* else 
        {
            cout<<"Not Applicable";
        } */ 
        break;
    default:
    cout<<"Invalid operator";

        break;
    }

}