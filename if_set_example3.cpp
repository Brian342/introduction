/* Write a program that prompts the user for two numbers and then computes them using the following rules.
 If the first number is greater than the second one, the second number is subtracted from the first one.
  If the second number is greater than the first one,
 the first number is divided by the second one. Otherwise the two numbers are added.*/
 #include<iostream>
 using namespace std;

 int main()
 {
    int num1,num2;

    cout<<"Enter two numbers->";
    cin>>num1>>num2;

    if( num1 > num2 || num2 > num1 )
    {
        cout<<"result of the two is->"<< num1 - num2 <<endl;
    }
    else if(num1 < num2)
    {
        cout<<"result of the two is->"<< num1 / num2 <<endl;
    }
    else if (num1 == num2)
    {
        cout.setf(ios::showpos);
        cout.setf(ios::left);
        cout<<"result of the two is->"<< num1 + num2 <<endl;
    }

    return 0;
 }