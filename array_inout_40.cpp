#include<iostream>
using namespace std;
int main()
{
    int array[20],n,i;
    cout << "Enter how many data : ";
    cin >> n;
    cout << "Enter values for array : ";
    for (i=0; i<n; i++)
    {
        cout << "First value = " <<i; 
        cin>> array[i];
    }
    cout << "The values are : ";
    for(i=0; i<n; i++)
    {
        cout << array[i]<<endl;
    }

}