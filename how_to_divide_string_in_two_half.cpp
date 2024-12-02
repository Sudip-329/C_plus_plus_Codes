#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n%2!=0)
		{
			cout<<"NO"<<endl;
		}
		else
		{
	    string s;
	    cin>>s;
	    string a;
		string b;
		int len = s.length();
	    for(int i=0; i<len; i++)
	    {
	        if(i%2!=0)
	        {
	            a += s[i];
	        }
	        else
	        {
	            b +=s[i];
	        }
	    }
		for(int i=0; i<(len/2); i++)
		{
			if(a[i]==b[i])
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}


	    }

    }
		return 0;
}
