/*Write a program that can be used by a policeman to determine if a vehicle has exceeded the speed limit and to levy a fine. 
The policeman should enter the vehicles speed and the speed limit. If the speed limit is exceeded by less than 30kph a fine of Kshs. 
2500 should be charged. Otherwise a fine of Kshs 4000 is charged. Your program should then output (in a suitable format) the vehicle speed, 
the speed limit, the excess speed and the fine levied*/
#include<iostream>
using namespace std;

int calculate_fine(){
            int calculate_fine;
            int speed_limit;
            int speed;
            int excess_speed;
            int fine_levied;

        cout<<"Enter the vehicle speed->";
        cin>>speed;
        cout<<"Enter the speed limit->";
        cin>>speed_limit;

        excess_speed = speed - speed_limit;
        fine_levied = speed_limit + 30;

        if(speed > speed_limit && speed < (speed_limit + 30) )
        {
            cout<<"speed is->"<<speed<<endl;
            cout<<"speed limit is->"<<speed_limit<<endl;
            cout<<"Excess speed is->"<<excess_speed<<endl;
            cout<<"fine levied is 2500"<<endl;
        }
        else if(speed > fine_levied)
        {
             cout<<"speed is->"<<speed<<endl;
            cout<<"speed limit is->"<<speed_limit<<endl;
            cout<<"Excess speed is->"<<excess_speed<<endl;
            cout<<"fine levied is 4000"<<endl;
        }
        else
        {
            cout<<"You are at the right speed limit have a safe journey"<<endl;
        }

        return calculate_fine;
}

int main()
{

    cout<<calculate_fine();

   return 0; 
}