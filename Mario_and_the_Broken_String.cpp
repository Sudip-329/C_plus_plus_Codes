#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int t,n;
	string s;
	cin>>t;
	while(t>0){
	    cin>>n;
	    cin>>s;
	    string c=s.substr(0,n/2);
	    string d=s.substr(n/2,n-1);
	        
	        
	    if(c==d){
	        cout<<"YES"<<endl;
	    } else{
	        cout<<"NO"<<endl;
	    }
	    t--;
	}
	return 0;
}
/*#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
        char a[100];
        char b[100];
		char c[100];
	    int n,count =0;
	    cin>>n;
	    char s[100];
	    for(int i=0; i<n; i++)
	    {
	        cin>>s[i];
	    }

	    for(int i=0; i<n/2; i++)
	    {
	        
	        a[i] = s[i];
	    }

		int j=0;
        for(int i = (n/2); i<n; i++)
	    {
            b[j] = s[i];
			j++;
		}
        for(int i=0; i<n/2; i++)
		{
			if(a[i]==b[i])
			{
				count++;
			}
		}

        if(count == (n/2))
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
	}
	return 0;
}*/
