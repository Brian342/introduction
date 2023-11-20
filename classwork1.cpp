/* write a program that accepts a number computes its square root and gives the answer. if someone enters 16 for example,
the output should be: the square root of 16 is 4. if someone enters 17 for example, the output should be: the squareroot of 17 is not a whole 
number.*/

#include<iostream>
using namespace std;

int main()
{
    double num;

    cout<<"Enter the number";
    cin>> num;
    
    double guess = num;
    double epsilon =1;

    while(guess * guess - num > epsilon)
{
    guess = 0.5 *(guess + num /guess);
}
    double res = guess;
    cout<<"The square root of "<< num << " is " << res << endl;
    
    
    return 0;

 }
