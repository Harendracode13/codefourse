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

	int xor_sum=accumulate(v.begin(),v.end(),0,std::bit_xor<int>());
	if(n%2!=0)
	{
		cout<<xor_sum<<"\n";
	}
	else{
		if(xor_sum==0)
		{
			cout<<0<<"\n";
		}
		else{
			cout<<-1<<"\n";
		}
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