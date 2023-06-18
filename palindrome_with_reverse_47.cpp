//First see reverse than check palindrome;
#include<iostream>
using namespace std;
int main()
{
    int rem,n,temp,sum = 0;
    cout << "Enter any number to see its reverse : ";
    cin >> n;
    temp = n;
    while(temp!=0)
    {
        rem = temp%10;
        sum = sum *10 + rem;
        temp = temp /10;
    }
    cout << "Reverse of the number : "<<sum<<endl;

    // To check palindrome 
    if ( sum == n)
    {
        cout << "Palindrome";
    }
    else 
    {
        cout << "Not palindrome";
    }
}