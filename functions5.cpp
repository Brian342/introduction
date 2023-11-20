/*Write a program that when run, produces a menu showing 
beer brands and their prices and then prompts the user enter his/her choice (1,2,3 or 4). 
The user is then asked how many bottles he/she wants. He is then given the total cost 
(depending on the cost of the beer chosen) as the output. See sample dialog below. 
If he/she enters an invalid choice e.g. 8, he/she should get an error message.
Sample dialog
* * * * Jamal and Daughters Pub * * * *
Beer Brand​                                   Price
1) Tusker                                       ​100/=
2) Pilsner                                      ​120/=
3) Smirnoff Ice                                 ​140/=
4) White Cap​                                     90/=
Enter your choice: 2
How many bottles of pilsner do you want? 11
11 bottles of pilsner will cost you Kshs. 1320*/
#include<iostream>
using namespace std;

int calculate_beer_brand(int bottles,int choice);
            //int calculate_beer_brand;

int main()
{
    int bottles;
    int choice;
      cout<<"* * * Jamla and Daughters pub * * *"<<endl;
        cout<<"Beer Brand                Price"<<endl;
        cout<<"1)Tusker                  100/="<<endl;
        cout<<"2)Pilsner                 120/="<<endl;
        cout<<"3)Smirnoff_ice            140/="<<endl;
        cout<<"4)White_cap               90/="<<endl;
    
            cout<<"Kindly Select your Poison(number)->";
            cin>>choice;
            cout<<"How many bottles do you want->";
            cin>>bottles;


    calculate_beer_brand(bottles,choice);
}
int calculate_beer_brand(int bottles,int choice){

        int calculate_beer_brand;

         if(choice==1)
        {
            cout<<bottles<<" Bottles of Tusker! The price is @100->"<< bottles * 100;
        }
        else if(choice==2)
        {
            cout<<bottles<<" Bottles of  Pilsner! The price is @120->"<<bottles * 120;
        }
       else  if(choice==3)
        {
            cout<<bottles<<" Bottles of  Smirnoff! The price is @140->"<<bottles * 140;
        }
        else if(choice==4)
        {
            cout<<bottles<<" Bottles of  White_cap! The price is @90->"<<bottles * 90;
        }
        else 
        {
            cout<<" Not on the Menu";
        }

    return calculate_beer_brand;
}