#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,x,y;
	    cin>>a>>b>>x>>y;
	    if(a==b)
	    {
	        cout<<"YES"<<endl;
	    }
	    else if(a>b)
	    {
	        a= a-y;
	        if(a<=b)
	        {
	            cout<<"YES"<<endl;
	        }
            else{
                cout<<"NO"<<endl;
            }
	    }
        else if(a<b)
        {
            a= a+x;
            if(a>=b)
	        {
	            cout<<"YES"<<endl;
	        }
            else{
                cout<<"NO"<<endl;
            }
            
        }
        else{
            cout<<"NO"<<endl;
        }
	}
	return 0;
}
