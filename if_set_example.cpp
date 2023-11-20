/*  Write a program that when run, produces a menu showing beer brands and their prices and then prompts 
the user enter his/her choice (1,2,3 or 4). The user is then asked how many bottles he/she wants. 
He is then given the total cost (depending on the cost of the beer chosen) as the output. 
See sample dialog below. 
If he/she enters an invalid choice e.g. 8, he/she should get an error message.*/
#include<iostream>
using namespace std;
 
 int main()
 {
    int choice,bottle;

    cout<<" 1) Tusker = 100 "<< endl;
    cout<<" 2) Pilsner =120 "<< endl;
    cout<<" 3) Smirnoff_ice =140"<< endl;
    cout<<" 4) White_cap =90" <<  endl;

    

    cout<<"Enter the bottle-> ";
    cin>>choice;
    cout<<"How many bottles do you want->";
    cin>>bottle;

    if (choice == 1)
    {
        cout<< choice << "your choice is Tusker which cost 100 each= " << bottle * 100 << endl;
    }
    else if(choice == 2)
    {
        cout<< choice <<" your choice is Pilsner which will cost you 120 each= " << bottle * 120 << endl;
    }
    else if (choice == 3)
    {
        cout<< choice << "your choice is Smirnoff_ice will cost you 140 each = " << bottle * 140 << endl;
    }
    else if(choice == 4)
    {
        cout<< choice << " your choice is White_cap which will cost you 90 each = " << bottle * 90 << endl;
    }
    else
    {
        cout<<"Invalid choice";
    }
    
    

    return 0;
 }