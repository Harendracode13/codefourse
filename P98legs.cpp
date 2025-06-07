#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long ans=n/4;
		long long reminder=n%4;
		if(reminder>0)
		{
			ans+=1;
		}
		cout<<ans<<"\n";
	}
}