//Minimum by array.
#include<iostream>
using namespace std;
int main()
{
    int a[5],i,n,min; 
    cout <<"Enter how many Numbers : "<<endl; /*For accepting numbers from user*/
    cin >> n;
    cout << "Enter number for array : ";

    for(i=0;i<n;i++) 
    { 
        cin>>a[i];
    }
    
    min = a[0];
    for(i=0; i<n; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    cout << "Minimum is = " <<min;
}