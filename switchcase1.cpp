/* 1) Write a program that when run, produces a menu showing beer brands and their prices and then prompts the user enter his/her choice (1,2,3 or 4). The user is then asked how many bottles he/she wants. He is then given the total cost (depending on the cost of the beer chosen) as the output. See sample dialog below. If he/she enters an invalid choice e.g. 8, he/she should get an error message.
Sample dialog
* * * * Jamal and Daughters Pub * * * *
Beer Brand                      ​Price
1) Tusker                       ​100/=
2) Pilsner                      ​120/=
3) Smirnoff Ice                 ​140/=
4) White Cap​                    90/=
Enter your choice: 2
How many bottles of pilsner do you want? 11
11 bottles of pilsner will cost you Kshs. 1320*/
#include<iostream>
using namespace std;

int main()
{
    int bottles;
    int choice;
    cout<<"\n * * * jamal and daughters pub * * *";
    cout<< "\n Beer brand                       price";
    cout<<"\n 1)  Tusker                         100/=";
    cout<<"\n 2)  Pilsner                        120/=";
    cout<<"\n 3)  Smirnoff_ice                   140/=";
    cout<<"\n 4)  White_cap                      90/=";

    cout<<"\n Enter the beer brand you want->";
    cin>>choice;
    cout<<"\n How many bottles do you want->";
    cin>>bottles;

    switch (choice)
    {
    case 1 :
        cout<< bottles <<"  bottles of Tusker will cost you->"<<bottles * 100;
        break;
    case 2 :
    cout<< bottles <<"  bottles of Pilsner will cost you->"<<bottles * 120 ;
        break;
    case 3:
    cout<< bottles << " bottles of smirnoff_ice will cost you->"<<bottles * 140;
        break;
    case 4:
    cout<< bottles << " bottles of White_cap will cost you->"<<bottles * 90;
        break;
    
    default:
    cout<<"invalid choice";
        break;
    }



    return 0;
}