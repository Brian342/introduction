/*In the Jomo Kenyatta University Diploma program, a student takes five units each semester. 
The student is then graded using the following criteria: -
Average Mark                        Order of Merit
75 – 100                                Distinction
65 – 75                                 Credit
50 – 65                                 Pass
0 – 50                                  Fail.
Write a program that accepts marks scored in five subjects and then c
omputes the average and prints the order of merit based on the average mark.*/
#include<iostream>
using namespace std;

int calculate_sum_average(int sum,double average){

                    int calculate_sum_average;
                    int subj1,subj2,subj3,subj4,subj5;

                    cout<<"Enter subject1 marks->";
                    cin>>subj1;
                    cout<<"Enter subject2 marks->";
                    cin>>subj2;
                    cout<<"Enter subject3 marks->";
                    cin>>subj3;
                    cout<<"Enter subject4 marks->";
                    cin>>subj4;
                    cout<<"Enter subject5 marks->";
                    cin>>subj5;

            sum= subj1 + subj2 + subj3 + subj4 + subj5;
            average = sum / 5.0;

            cout<<"The sum of all 5 subjects is->"<<sum<<endl;
            cout<<"The average of all the 5 subjects is->"<<average<<endl;

        if(average>75 && average<=100)
        {
             cout<<"You have attained a merit of Distinction!"<<endl;
        }
         else if(average>65 && average<=75)
        {
             cout<<"You have attained a merit of Credit!"<<endl;
        }
        else if(average>50 && average<=65)
        {
             cout<<"You have attained a merit of Pass!"<<endl;
        }
        else  if(average>0 && average<=50)
        {
             cout<<"You have attained a merit of Fail!"<<endl;
        }
        else 
        {
            cout<<"NOt on the Merit";
        }

    return calculate_sum_average;
}
int main()
{
    int sum;
    double average;
    cout<<calculate_sum_average(sum,average);

    return 0;
}
