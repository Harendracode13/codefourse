#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int p;
	cin>>p;
	vector<int> v(p);
	map<int,int> a;
	for(int i=0;i<2*p;i++)
	{
		cin>>v[i];
		cout<<v[i]<<" ";
	}
	for(auto i:v)
	{
		a[i]++;
	}

	if(a.size()==n)
	{
		cout<<"I become the guy.";
	}
	else{
		cout<<"Oh, my keyboard!";
	}



}