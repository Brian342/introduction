/*In the Jomo Kenyatta University Diploma program, a student takes five units each semester. 
The student is then graded using the following criteria: -
Average Mark                 Order of Merit
75 – 100                        Distinction
65 – 75                         Credit
50 – 65                         Pass
0 – 50                          Fail.
Write a program that accepts marks scored in five subjects and then computes the average and prints the order of merit based on the average mark.*/
#include<iostream>
using namespace std;

int main ()
{
    int subj1,subj2,subj3,subj4,subj5;
    double sum,average;

    cout<<"Average mark                 order of merit";
    cout<<"\n 75 - 100                       Distinction";
    cout<<"\n 65 - 75                         credit";
    cout<<"\n 50 - 65                          pass";
    cout<<"\n 0  - 50                          fail";

    cout<<"\nEnter the marks of subject 1->";
    cin>>subj1;
    cout<<"Enter the marks of subject 2->";
    cin>>subj2;
    cout<<"Enter the marks of subject 3->";
    cin>>subj3;
    cout<<"Enter the marks of subject 4->";
    cin>>subj4;
    cout<<"Enter the marks of subject 5->";
    cin>>subj5;

    sum = subj1 + subj2 + subj3 + subj4 + subj5;
    average = sum / 5;
    
    cout<<"The sum of all the subjects is->"<< sum << endl;
    cout<<"The average of the subjects is->" << average << endl;

    if (average >= 75 && average <= 100)
    {
        cout <<"congratulation you have attained a-> Distinction";

    }
    else if( average >= 65 && average < 75)
    {
        cout<<"congratulation you have attained a-> Credit";

    }
    else if(average >= 50 && average < 65)
    {
        cout<<"congratulation you have attained a->pass";

    }
    else if (average >= 0 && average < 50)
    {
        cout<<"you have attained a-> fail";
    }
    else {
        cout<<"Inavalid merit";
    }

    return 0;

}