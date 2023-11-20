/* Write a program to read a value from the keyboard and output the phrase NEGATIVE0
 if the number is negative, POSITIVE if the number is positive or ZERO otherwise.*/

 #include<iostream>
 #include<cctype>
 using namespace std;

 int main()
 {
    int value;

    cout<<"Enter number->";
    cin>>value;

    if(value < 0)
    {
        cout<<"NEGATIVE";
    }
    else if(value > 0)
    {
        cout<<"POSITIVE";
    }
    else 
    {
        cout<<"ZERO";
    }
    return 0;
 }