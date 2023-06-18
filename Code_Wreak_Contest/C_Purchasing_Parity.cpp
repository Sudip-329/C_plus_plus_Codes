#include<iostream>
using namespace std;
int main()
{
    int n,x,sum=0;
    cin>>n>>x;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(i!=0 && (i+1)%2==0)
        {
            a[i]=a[i]-1;
        }
        sum = sum+a[i];
    }
    if(sum<=x)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}