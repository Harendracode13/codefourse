#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x=0;
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		string s;
	    cin>>s;
 
		if(s[0]=='X')
		{
			if(s[1]=='+')
			{
				x++;
			}
			else{
				x--;	
			}
		}
		else if(s[0]=='+')
		{
			++x;
		}
		else{
			--x;
		}   
	}
	cout<<x;

}