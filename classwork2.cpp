/* repeat question 1,2,3,4,in the characters and strings exercise withiout using toupper,tolower,isupper,islower,isdigit,or any 
ctype.h function*/
#include<iostream>
using namespace std;

int main()
{
    char value;

    cout<<"Enter the value";
    cin>>value;

    if((value >= 'a' && value <='z') || (value >='A' && value<='Z')){

        cout<<value<<"is a letter";
    }
        else if ((value>='0' && value <='9'))
        {
            cout<<value<<"is a digit";
        }
        else 
        cout<<value<< "is a special character";
        


    return 0;
}