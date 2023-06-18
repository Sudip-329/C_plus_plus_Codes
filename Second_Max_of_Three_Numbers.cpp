#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >>n;
	while(n--)
	{
	    int a[3];
	    for(int i=0; i<3; i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+3);

	    cout<<a[1]<<endl;
	
	}
	return 0;
}