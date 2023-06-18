#include <iostream>
using namespace std;
int main() 
{
    int count=0;
    char c;
    cout<<"INPUT TEXT \n";
    cin.get(c);   // it will take the first char thow we put a full string
    while (c !='\n')
    {
        cout.put( c);
        count++;
        cin.get(c); // it will take the 2nd char of the string and loop will go on
    }
    cout<< "\n Number of characters = "<<count<<"\n"; //also calculate the space
    return 0;
}