/*Write a program that accepts a sentence (with spaces) 
and counts the number of letters, digits, special characters and spaces.
e.g. if the user enters Are you 21 years old?

The output should be

Are you 21 years old? has: –

14 letters, 2 digits, 4 spaces and 1 special characters.*/
#include<iostream>
using namespace std;

int main()
{
    int digit = 0;
    int letters,spaces,special_characters=0;
    char sentence[100];
    int i;


    cout<<"Enter a sentence->";
    cin>>sentence;

    for(i=0;sentence[i]='\0';i++){

          if((sentence[i]>='A' && sentence[i]<='Z')|| (sentence[i]>='a' && sentence[i]<='z')){
             letters++;
          }
          else if(sentence[i]>='0' && sentence[i]<='9'){
            digit++;
          }
          else if(sentence[i]==' '){
            spaces++;
          }
          else{
            special_characters++;
          }
    }
        cout<<sentence<<" ?" <<" has:-"<<endl;
        cout<<letters<<" letters";
        cout<<digit<<" digit";
        cout<<spaces<<" spaces";
        cout<<special_characters<<" special_characters";
    
  
    

    return 0;

}