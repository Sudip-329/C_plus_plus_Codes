//use of continue statement.
#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=1; i<=10; i++)
    {
        if(i==5)
        {
            continue;  //if use continue then the step will not be printed.
        }
        cout << i<< endl;
    }
}