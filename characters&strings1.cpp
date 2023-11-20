/* Write a program that accepts a character and specifies what type of character it is e.g.
A is a letter.

2 is a digit.

$ is a special character.

Etc. [Depending on what the user enters]*/

#include<iostream>
using namespace std;

int main()
{
    char value;

    cout<<"Enter a value->";
    cin>>value;

    if(value >= 'A' && value <= 'Z')
    {
        cout<< value <<" is a letter";
    }
    else if( value >= 0 && value <= 9 )
    {
        cout<< value << " is a digit";
    }
    else
    {
        cout<< value <<" is a special charater";
    }

    return 0;
    
}