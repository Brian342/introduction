/* Write a program that prompts the user for two numbers. 
The program then prompts the user for the operator (+, - , * , / or %). 
The user is the given the answer depending on the operator entered.
 If he enters an invalid operator, he/she should get an error message. See sample dialog below.*/
 #include<iostream>
 using namespace std;

 int main()
 {
    int num1,num2;
    double operator_num;

    cout<<" select operator " << endl;
    cout<<" 1)  +"<< endl;
    cout<<" 2)  -"<< endl;
    cout<<" 3)  *"<< endl;
    cout<<" 4)  /"<< endl;
    cout<<" 5)  %"<< endl;

    cout<<"Enter the first number->";
    cin>>num1;
    cout<<"Enter the second number->";
    cin>>num2;

    cout<<"Enter the operator(number)->";
    cin>>operator_num;

    if(operator_num == 1)
    {
        cout<<num1<< " + "<<num2<<" The sum of the 2 is->"<< num1 + num2 <<endl;
    }
    else if (operator_num == 2)
    {
        cout<<num1<< "-" <<num2<<" The minus of the 2 is->"<< num1 - num2 <<endl;
    }
    else if (operator_num == 3)
    {
        cout<<num1<< "*" <<num2<<" The multiplication of the 2 is->"<< num1 * num2 <<endl;
    }
    else if (operator_num == 4)
    {
        cout<<num1<< "/" <<num2<<" The division of the 2 is->"<< num1 / num2 <<endl;
    }
    else if (operator_num == 5)
    {
        cout<<num1<< "%" <<num2<<" The mod of the 2 is->"<< num1 % num2 <<endl;
    }
    else 
    {
        cout<<" Invalid operator"; 
    }



    return 0;

 }