#include<iostream>
using namespace std;
int main()
{
    int a[5],i,n; 
    cout <<"Enter how many Numbers : "<<endl; /*For accepting numbers from user*/
    cin >> n;
    cout << "Enter number for array : ";

    for(i=0;i<n;i++) 
    { 
        cin>>a[i];
    }
    
    cout << "Even Numbers in Array are : ";
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0) //Check number is even
        {
            cout << a[i]<<"  ";
        }
    } 
    
    cout <<"\n odd Numbers in Array are : "; 
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0) //Check number is odd
        {
            cout << a[i]<<"  ";
        } 
    }
}
