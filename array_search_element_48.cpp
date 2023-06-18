//Linear search by array;
#include<iostream>
using namespace std;
int main()
{
    int n,i,pos,value;
    cout <<"Enter how many numbers : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements : ";
    for(i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout <<"Enter the value to find : ";
    cin>> value;
    for(i=0; i<n; i++)
    {
        if(value == arr[i])
        {
            pos = i+1;
            //break;
            cout <<"Found at position = "<<pos<<endl;   //print the desired code.
        }
        //cout <<"Found at position = "<<pos<<endl; ...print all the position of all num.
    }
   // cout <<"Found at position = "<<pos;  ....only print single value (double num position not work.)
}