#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	vector<int> v(n);
	int cnt=0;
	int ans=0;

	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		if(v[i]==0)
		{
		cnt++;
        ans=max(ans,cnt);
		}
		else{
			cnt=0;
		}
	}
	cout<<ans<<"\n";
}

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		solve();
	}
}