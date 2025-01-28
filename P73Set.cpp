#include<bits/stdc++.h>
using namespace std;

int main()
{

	int t;
	cin>>t;

	while(t--)
	{
		long long l,r,k;
		cin>>l>>r>>k;

		long long ans=r/k;
		if(ans>=l)
		{
		ans=ans-l+1;
		cout<<ans<<"\n";
		}else{
			cout<<0<<"\n";
		}

	}

}