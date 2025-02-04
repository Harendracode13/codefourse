#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> v(n);
		cin>>v[0];
		for(int i=1;i<n;i++)
		{
			cin>>v[i];
			if(v[i]<v[i-1] && v[i-1]-v[i]==1)
			{
				swap(v[i-1],v[i]);
			}
		}
		if(is_sorted(v.begin(),v.end()))
		{
			cout<<"YES\n";
		}
		else{
			cout<<"No\n";
		}

	}
}
