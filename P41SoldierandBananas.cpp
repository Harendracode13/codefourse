#include<bits/stdc++.h>
using namespace std;

int main()
{
	int k,n,w;
	cin>>k>>n>>w;
	int cost=0;

	for(int i=1;i<=w;i++)
	{
       cost+=i*k;
	}

	int ans=cost-n;
	if(ans<=0)
	{
		cout<<0;
	}
	else
	{
		cout<<ans;
	}
	
	return 0;
}