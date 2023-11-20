/* Write a program that can be used by a policeman to determine if a vehicle has exceeded the speed limit
 and to levy a fine. The policeman should enter the vehicles speed and the speed limit. 
 If the speed limit is exceeded by less than 30kph a fine of Kshs. 2500 should be charged. 
 Otherwise a fine of Kshs 4000 is charged. Your program should then output (in a suitable format) the vehicle speed, 
 the speed limit, the excess speed and the fine levied.*/
 #include<iostream>
 using namespace std;

 int main()
 {
    double speed_limit,vehicle_speed,excess_speed,fine_levied;

    cout<<"Enter the speed limit-> ";
    cin>>speed_limit;
    cout<<"Enter the vehicle speed-> ";
    cin>>vehicle_speed;

    excess_speed = vehicle_speed - speed_limit;
    fine_levied = speed_limit + 30;


    if (vehicle_speed > speed_limit && vehicle_speed < (speed_limit + 30))
    {
        cout<<"\nspeed->"<<vehicle_speed <<"km/h";
        cout<<"\nspeed_limit->"<<speed_limit<<"km/h";
        cout<<"\nvehicle_speed->"<<vehicle_speed<<"km/h";
        cout<<"\nthe fine levied -> 2500ksh"<<"\n\n";
    }
    else if(vehicle_speed > fine_levied )
    {
        cout<<"\nspeed->"<<vehicle_speed <<"km/h";
        cout<<"\nspeed_limit->"<<speed_limit<<"km/h";
        cout<<"\nvehicle_speed->"<<vehicle_speed<<"km/h";
        cout<<"\nthe fine levied -> 4000ksh"<<"\n\n";
    }
    else{
        cout<<"\n you are in the specified speed limit have a nice journey ahead \n\n";
    }

return 0;

 }