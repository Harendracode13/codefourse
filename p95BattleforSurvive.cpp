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
		vector<long long> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}

		if(n!=2)
		{
		reverse(v.begin(),v.end());

		v[2]=v[1]-v[2];
		for(int i=3;i<n;i++)
		{
			v[i]=v[i-1]-v[i];
		}
		v[0]=v[0]-v[n-1];
		cout<<v[0]<<"\n";
			
		}
		else{
			cout<<v[1]-v[0]<<"\n";
		}

	}
}