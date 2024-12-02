#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
        int n,y=0,sum=0,b=0,lsum=0;
	    cin>>n;
		for(int i=0; i<n; i++)
	    {
			int a[n];
			int x=0;
	        cin>>a[i];

			if(a[i]==1)
		    {
			lsum = lsum+1;
		    }
			
		    if(a[i]!=1)
		    {
			b =a[i];

            while(a[i]!=1)
	        {
				x++;
                a[i] = (a[i])-1;
                y = b * a[i];
			    sum = sum+y;
	        }

		    }
		}
		cout<<(sum+lsum)<<endl;
    }
}
