#include<iostream>
using namespace std;

int main()
{
    //string yes,no;
    bool choice;
    bool is_male = true, is_female = false;

    //cout<<"Are you male? (true/false)";
    cout<<"\n 1) male";
    cout<<"\n 2) female";
    cout<<"\n 3) others";

    cout << "\n what gender are you->";
    cin >> choice;

    switch (choice)
   
    {
    case 1:
        //cout << is_male << endl;
        cout<<"you are male";
        break;
    case 0:
        //cout << is_female << endl;
        cout<<"you are female";
        break;
    
    default:
        cout << "Others" << endl;
        break;
    }
    return 0;
}