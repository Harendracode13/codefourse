#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,m,a;
	cin>>n>>m>>a;

	long long ans=n/a;
	long long ans1=m/a;
	if(a==1)
	{
		cout<<n*m;
		return 0;
	}

	if(n%a!=0 )
	{
		ans++;
	}
	if(m%a!=0)
	{
		ans1++;
	}

	long long finalans=ans*ans1;
	cout<<finalans;
	return 0;


}