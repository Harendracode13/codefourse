#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
     int temp=v[0];
	 int cnt=1;
	for(int i=0;i<n;i++)
	{
		if(temp!=v[i])
		{
			cnt++;
			temp=v[i];
		}
	}
	cout<<cnt;
	return 0;
}