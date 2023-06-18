#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,n;
    cin>>p>>n;
    if(n==0)
    {
        cout<<p;
    }
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int min=0,min2=0,v=0,m=0;
    sort(a, a+n);

    for(int i=0; i<n; i++)
    {

        if(a[i]==p)
        {
            if((a[i]-a[i-1])>1)
            {
                min=a[i]-1;
                cout<<min;
                break;
            }
            else if(abs(a[i]-a[i+1])>1)
            {
                min2=a[i]+1;
                cout<<min2;
                break;
            }
            else{
                v=abs(a[i+1]+1);
                m=abs(a[i-1]+1);
                if(v>m && m!=a[i])
                {
                cout<<m;
                }
                else{
                    cout<<v;
                }
                break;
            }
        }
    }
}