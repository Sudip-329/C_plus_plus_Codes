//prime number.
#include<iostream>
using namespace std;
int main()
{
    int n,i,count;
    cout <<"Enter any number to see it is prime or not : ";
    cin>> n;

    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }

    if(count==0)
    cout <<"Prime number.";
    else
    cout <<"Not Prime num";
}
