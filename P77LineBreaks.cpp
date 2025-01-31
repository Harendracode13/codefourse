#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n,m;
       int cnt=0,ans=0;
		cin>>n>>m;
		for(int i=0;i<n;i++)
		{
			string s;
			cin>>s;
			ans+=s.length();
			if(ans<=m)
			{
				
				cnt++;
			}
		}
		cout<<cnt<<"\n";
	}
}