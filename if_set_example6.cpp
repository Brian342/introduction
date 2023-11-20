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
    double perimeter,area,choice,length,width,rad,base,height;
    const double pi = 3.142 ;

    cout<<"select a figure "<<endl;
    cout<<"1) rectangle "<<endl;
    cout<<"2) circle "<<endl;
    cout<<" 3) right_angle_triangle"<<endl;

    cout<<"select your choice of figure (in numbers)->";
    cin>>choice;

    if(choice == 1)
    {
        cout<<"Enter the dimension-> ";
        cin>> length >> width ;

        perimeter = 2 * ( length + width );
        area = length * width;

         cout<<"The figure selected is Rectangle "<<" the dimentions are -> "<< length << width << " the area is -> "<< area << " the perimeter is -> " << perimeter << endl;

    }
    else if(choice == 2)
    {
        cout<<"Enter the radius-> ";
        cin>> rad ;

        perimeter = 2 * pi * rad;
        area = pi * pow(rad,2);

         cout<<"The figure selected is circle "<<" the dimentions are -> "<< rad << " the area is -> "<< area << " the perimeter is -> " << perimeter << endl;
    }
    else if (choice == 3)
    {
        cout<<"Enter the base and height-> ";
        cin>> base >> height ;

        perimeter = base * height /2;
        area = base + height + sqrt(pow(base , 2) + pow(height,2));

         cout<<"The figure selected is Right_angled_triangle "<<" the dimentions are -> "<< base << height << " the area is -> "<< area << " the perimeter is-> " << perimeter << endl;

    }
    else {
        cout<<"Invalid operator";
    }

    return 0;
 }