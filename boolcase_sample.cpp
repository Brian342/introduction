#include<iostream>
using namespace std;

int main()
{
    //string yes,no;
    string choice,male,female;
    bool option;

    cout<<"Are you male/female->";
    getline(cin,choice);

    if(choice == male )
    {
         option = true;
    }   
    else if (choice == female)
    {
         option = false;
    }
    else
    {
        cout<<"invalid gender";
    }
       
    switch (option)
   
    {
    case true:
        cout<<"you are male";
        break;

    case false:
        cout<<"you are female";
        break;
    }
    return 0;
}