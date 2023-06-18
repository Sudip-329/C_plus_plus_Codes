#include<iostream>
#include<vector>
using namespace std;

vector<int>reverse(vector<int>v, int m)
{
    int s=0, e = v.size()-1;
    while(s<=e)
    {

        swap(v[s],v[e]);
        s++;
        e--;}
    return v;
}

void print(vector<int>v)
{
    for(int i:v)
    {
        cout<<i<< " ";
    }
    cout<<endl;
}

int main()
{
    vector <int> v;
    int n;
    cin>>n;
    int a;
    for (int i = 0; i <n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    int m;
    cin>>m;
    vector<int> ans = reverse(v,m);
    print(ans);
}