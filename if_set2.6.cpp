/* Write a program that accepts an integer and checks whether it is positive,
 negative or zero and then prints an appropriate message.*/
 #include<iostream>
 using namespace std;

 int main()
 {
    int number;

    cout<<"Enter a number->";
    cin>>number;

    if(number < 0)
    {
        cout<<"Negative number";
        
    }
    else if(number > 0)
    {
        cout<<"Positive number";
    }
    else 
    {
        cout<<"Zero";
    }

    return 0;
    
 }