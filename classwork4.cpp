#include <iostream>
using namespace std;

int main()
{
    string name;
    int countdigit,countletter,countspace,countspecial;

    int counter;

    countdigit= countletter =countspace = countspecial = 0;

    cout<<"Enter the sentence->";
    getline(cin,name);

    for (counter = 0;name[counter];counter++) {

    if(name[counter] >= '0')
        countdigit++;
    else if ((name[counter] >= 'a' && name[counter] <='z') || (name[counter] >='A' && name[counter] <='Z'))
        countletter++;
    else if (name[counter] == ' ')
        countspace++;
    else 
        countspecial++;
    
    }

    cout << name << "\n has this number of characters->" 
    "\n countdigit "<< countdigit <<
    "\n countletter "<< countletter << 
    "\n countspace "<< countspace <<  
    "\n countspecial "<< countspecial << 
    endl;

    return 0;
}