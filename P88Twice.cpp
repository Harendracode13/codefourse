#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cn>>t;

	while(t--)
	{
		int n;
		cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}

		map<int,int> m;
		for(int i:v)
		{
			m[i]++;
		}
        int ans=0;
		auto it=m.begin();
		auto it1=next(it);
		for(;it!=m.end();)
	}
}