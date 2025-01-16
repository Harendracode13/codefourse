#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	vector<int> v(n);
     
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	if(n==1)
	{
		cout<<v[0]<<"\n";
	}
	else if(n==2)
	{
		swap(v[0],v[1]);
		cout<<v[0]<<" "<<v[1]<<"\n";
	}
	else{

	int sum=n+1;

	for(int i=0;i<n;i++)
	{
		int ans=sum-v[i];
		cout<<ans<<" ";	
	}
	cout<<"\n";
	}

}

int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		solve();
	}
	
}