#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;

		long long ans=n/5;
		if(n%5!=0)
		{
			cout<<ans+1<<"\n";
		}
		else{
			cout<<ans<<"\n";
		}
	}
}