/*calculate a right angled triangle*/
#include<iostream>
using namespace std;

struct right_angle_triangle
{
    
    int base;
    int height;
    
};
int main()
{
    right_angle_triangle mystruct;
    int area;

    cout<<"Enter the base->";
    cin>>mystruct.base;
    cout<<"Enter the height->";
    cin>>mystruct.height;


     area = 1/2.0 * (mystruct.base) * mystruct.height;

    cout<<"The area is "<<area;
    return 0;
}
