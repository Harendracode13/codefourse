#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	vector<int> v(n);

	int maxi=0;
	int mini=INT_MAX;
	int maxindex=0;
	int minindex=0;

	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		if(maxi<v[i])
		{
			maxi=v[i];
			maxindex=i;
		}
		if(mini>v[i])
		{
			mini=v[i];
		}
	}
	vector<int> result(v);

	if(maxindex==minindex)
	{
		cout<<"No\n";
		return ;
	}
	else{
     swap(v[0],v[maxindex]);
	 swap(v[1],v[minindex]);
	}
    cout<<"Yes\n";
	for (auto i:v)
	{
		cout<<i<<" ";
	}
	cout<<"\n";
}

int main(){
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}