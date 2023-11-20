/* nested for loop */
#include<iostream>
using namespace std;

int main()
{
    int i,j;
    for (i=1;i<=6;i++){ //row
       
       for(j=2;j<=6;j++) //colum
       {
        cout<<j;//inner loop 
        
       }
    }
    cout<<i;//outer loop
    
     
    return 0;

}