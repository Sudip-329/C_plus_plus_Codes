#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>ans;
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ans.push_back(a[0]);
    for(int i=0; i<n; i++)
    {
        ans.push_back(a[i+1]-a[i]);
    }
    for(int i=0; i<n; i++)
    {
        cout<<ans[i]<<" ";
    }
}