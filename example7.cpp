/*Write a program that accepts distance traveled in metres and the time taken in minutes 
and then outputs the speed in kilometers per hour (km/h). E.g. 
if someone enters a distance (in metres) of 500 and a time (in minutes) of 15 the output for speed should be 2 km/h.*/
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double distance_in_metres,time_in_hour,time,distance,speed;

    cout<<"Enter the distance->";
    cin>>distance;
    cout<<"Enter the time";
    cin>>time;

    distance_in_metres = distance/1000;
    time_in_hour = time/60;
    speed = distance_in_metres/time_in_hour;

    cout<<"The output of the speed is->"<< speed <<"km/h";

    return 0;

}


