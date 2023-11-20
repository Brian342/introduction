/* Write a program that accepts a character and specifies whether it is in uppercase or in lower case e.g.
H is in uppercase

q is in lowercase

# is not a letter.

Etc. [Depending on what the user enters]*/
#include<iostream>
using namespace std;

int main()
{
    char digit;

    cout<<"Enter a digit->";
    cin>>digit;

    if(digit >='A' && digit <= 'Z')
    {
        cout<<digit<<" is in UPPERCASE";
    }
    else if(digit >= 'a' && digit <= 'z')
    {
        cout<<digit<<" is in lowercase";
    }
    else{
        cout<<digit<<" is not a letter";
    }
    return 0;
}