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

int calculate_sum(int sum){
        int calculate_sum;
        
        int subj1,subj2, subj3, subj4,subj5;

    cout<<"Enter your subject 1 marks->";
    cin>>subj1;
    cout<<"Enter your subject 2 marks->";
    cin>>subj2;
    cout<<"Enter your subject 3 marks->";
    cin>>subj3;
    cout<<"Enter your subject 4 marks->";
    cin>>subj4;
    cout<<"Enter your subject 5 marks->";
    cin>>subj5;

    sum = subj1 + subj2 + subj3 + subj4 + subj5;
    return calculate_sum;
}

double calculate_average(double average){
        double calculate_average;
        int sum;
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        

        average = calculate_sum(sum) / 5;
        
       if(average>75 && average<=100)
        {
            cout<<"You have attaned a Distinction";
        }
        else if(average>65 && average<=75)
        {
            cout<<"You have attaned a Credit";
        }
        else if(average>50 && average<=65)
        {
            cout<<"You have attaned a Pass";
        }
        else if(average>0 && average<=50)
        {
            cout<<"You have attaned a Fail";
        }
        else
        {
            cout<<"Not on the Merit";
        } 

        return calculate_average;
}
int main()
{
        int sum;
        double average;
    cout << calculate_sum(sum);

    cout << calculate_average(average);
      
     return 0;
}