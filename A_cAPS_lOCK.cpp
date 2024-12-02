#include<bits/stdc++.h>
using namespace std;

int main()
{
		string s;
		cin>>s;
		int count=0;
		for(int i=1;i<s.length();i++)
		{
			if(s[i]>=65 && s[i]<=90)
			{
				count++;
			}
		}
		
		if(count==s.length()-1){
			for(int i=1;i<s.length();i++){
				s[i]=tolower(s[i]);
				
			}
			if(s[0]>=97 && s[0]<=122){
				
				s[0]=toupper(s[0]);
			}
			else{
				s[0]=tolower(s[0]);
			}
		}
		cout << s;
}
