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

	bool yes=false;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(__gcd(v[i],v[j])<=2)
			{
				yes=true;
				break;
			}
		}
	}
	if(yes){cout<<"Yes\n";}
	else{
	cout<<"No\n";
	}
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