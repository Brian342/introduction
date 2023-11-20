/* Write a program that prompts the user for two numbers and then 
computes them using the following rules.
 If the first number is greater than the second one, 
 the second number is subtracted from the first one. 
 If the second number is greater than the first one, 
 the first number is divided by the second one. Otherwise the two numbers are added.*/
 #include<iostream>
 using namespace std;

 int main()
 {
    int x,y,logic;

    cout<<"Enter two numbers->";
    cin>> x >> y ;
    cout<<"select logic to use->";
    cin>>logic;

    switch (logic)
    {
    case 1:
        //x > y;
        cout<< x - y;
        break;
    case 2:
        //x < y;
        cout<< static_cast<double>(x) / y;
    
    default:
    //x == y;
    cout<< x + y;
        break;
    }

    return 0;


 }