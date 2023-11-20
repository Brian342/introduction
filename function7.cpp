/*Write a program that computes the area & perimeter of either a rectangle, a circle or a right-angled triangle. 
The program should display a menu that enables the user to select the type of figure whose area & perimeter he/she wants to compute. 
Depending on the users choice, the program should prompt for the dimensions and perform the computations. 
The output should be: - The type of figure, the dimensions, the area and the perimeter. 
(NB:The calculation should be for only one figure at any one time.)*/
#include<iostream>
#include<cmath>
using namespace std;

int calculate_area_perimeter(int length,int width,int radius,int base,int height){

                int calculate_area_perimeter;
                double const pi=3.142;
                string figure;
                int area;
                int perimeter;

                cout<<"* * list of Figure * * "<<endl;
                cout<<"1)   Rectangle"<<endl;
                cout<<"2)   Circle"<<endl;
                cout<<"3)  Right-angled triangle"<<endl;

                cout<<"select the figure you want(number)->";
                getline(cin,figure);
            
            if(figure=="rectangle" || figure=="Rectangle")
            {
                cout<<"Enter the length->";
                cin>>length;
                cout<<"Enter the width->";
                cin>>width;
            
            area= length * width;
            perimeter = 2 *(length + width);

            cout<<"The type of figure is Rectangle..! The Dimenstions are "<<length<<" and "<<width<< "The area is->"<<area<<"The perimeter is->"<<perimeter;

            }
            else if(figure=="circle" || figure=="Circle")
            {
                cout<<"Enter the Radius";
                cin>>radius;

                area = pi * pow(radius,2);
                perimeter = 2 * pi * radius * radius; 
            
                cout<<"The figure selected is Circle..! The radius is->"<<radius<<"The area is->"<<area<<"The perimeter is->"<<perimeter;
            }
            else if(figure=="right-angled Triangle" || figure=="Right-angled Triangle")
            {
                cout<<"Enter the base and height-> ";
                cin>> base >> height ;

                area = base * height /2;
                perimeter = base + height + sqrt(pow(base , 2) + pow(height,2));

                cout<<"The figure selected is Right-angled Triangle..! the dimensions are->"<<base<< " and " <<height<<" The area is->"<<area<<"The perimeter is "<<perimeter;

            }
            else 
            {
                cout<<"Not on the List";
            }
            

return calculate_area_perimeter;            
}
int main(){
        int length,width,radius,base,height;

    cout<<calculate_area_perimeter(length,width,radius,base,height);

    return 0; 
}