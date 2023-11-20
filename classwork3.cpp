#include<iostream>
using namespace std;

 int main()
 {
 char value;

    cout<<"Enter the value->";
    cin>>value;

    if((value >='A' && value<='Z')){

        cout<<value<<"is a  capital letter";
    }
        else if ((value >= 'a' && value <='z'))
        {
            cout<<value<<"is a small letter";
        }
        else 
        cout<<value<< "is a special character";
        return 0;
 }