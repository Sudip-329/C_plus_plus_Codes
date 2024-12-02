#include<iostream>
using namespace std;
int main()
{
    int count = 0;
    char c;
    cout<<"input text : \n";
    cin.get(c);

    while(c != '\n')
    {
        cout.put(c);  //put only one char,,,,,,after takin next char again print
        count++;
        cin.get(c); // the next char will be taken here and again runs the loop
    }
    cout<<"\nNumber of char = "<<count;
    return 0;
}