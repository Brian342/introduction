#include<iostream>
using namespace std;

int main()
{
    //loop to count number digits.
    int number;
    cout<<"Enter a number->";
    cin>>number;

    if(number == 0)
    {
        cout<<"your number is zero/0.";
    }
    else 
    {
        int counter = 0;
        while (number > 0 ){
            number /= 10;
            counter++;
        }
        cout<<"your digit is->" <<number << " your number contain->" <<counter <<" digit" <<endl;
    }

return 0;

}