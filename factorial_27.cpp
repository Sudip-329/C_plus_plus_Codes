#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number to see its factorial : ";
    cin>>n;
    int fact = 1,i;
    for(i=1; i<=n; i++)
    {
        fact = fact * i;
        cout <<fact<<endl;
    }
    cout <<"Final result = "<<fact;
}