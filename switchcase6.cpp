/* Write a program that computes the area & perimeter of either a rectangle, 
a circle or a right-angled triangle. 
The program should display a menu that enables the user to select the type of figure 
whose area & perimeter he/she wants to compute. 
Depending on the users choice, the program should prompt for the dimensions and perform the computations. 
The output should be: - The type of figure, the dimensions, the area and the perimeter. 
(NB:The calculation should be for only one figure at any one time.)*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double area,perimeter,x,y;
    int figure;
    const double pi = 3.142;

    cout<<"* * *  Kindly select a figure * * *";
    cout<<"\n 1) Rectangle ";
    cout<<"\n 2)  circle ";
    cout<<"\n 3)  right_angle ";

    cout<<"\n select the figure->";
    cin>>figure;
     
     switch (figure)
     {
     case 1:
        cout<<"Enter the dimensions->";
        cin>>x >> y;

        area = x * y;
        perimeter = 2 * (x + y);

        cout<<" The figure selected is Rectanlge:" "\n the dimensions are->"<< x << " and "<< y << " \nthe area is->"<< area << "\nthe perimeter is->"<< perimeter << endl;
     break;
     case 2:
      cout<<"Enter the radius->";
        cin>>x ;

        perimeter = 2 * pi * x;
        area = pi * pow(x,2);

        cout<<" The figure selected is circle:" "\n the radius is->"<< x << " \nthe area is->"<< area << "\nthe perimeter is->"<< perimeter << endl;
    
     case 3:
     cout<<"Enter the base and height-> ";
        cin>> x >> y ;

        perimeter = x * y /2;
        area = x + y + sqrt(pow(x , 2) + pow(y,2));

        cout<<"The figure selected is Right_angled_triangle: "<<" \nthe dimentions are -> "<< x << " and " << y << " \nthe area is -> "<< area << " \nthe perimeter is-> " << perimeter << endl;
        break;
         default:
         
         cout<<"Invalid selection!";
     }
    return 0;
}