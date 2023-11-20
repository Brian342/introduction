#include<iostream>
using namespace std;

int main()
{
    //string yes,no;
    bool choice = false;
    bool is_male = true, is_female = false;

    //cout<<"Are you male? (true/false) ";
    //cin >> choice;

    cout<<"Your choice was "<<choice<<"\n\n";

    switch (choice)
   
    {
    case true:
        //cout << is_male << endl;
        cout<<"you are male";
        break;
    case false:
        //cout << is_female << endl;
        cout<<"you are female";
        break;
    
    default:
        cout << "Others" << endl;
        break;
    }
    return 0;
}