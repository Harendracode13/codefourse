#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& a,int k)
{
	for (auto i:a)
	{
		if(i==k)
		{
			cout<<"Yes";
			return ;
		}
	}
	cout<<"No";
}

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n,k;
		cin>>n>>k;
        vector<int> a;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			a.push_back(x);
		}

		solve(a,k);
       cout<<"\n";
	}
}