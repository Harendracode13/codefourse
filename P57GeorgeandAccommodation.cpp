#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int cnt=0;

	for(int i=0;i<n;i++)
	{
		int l,c;
		cin>>l>>c;
		if(c==l || l==c-1)
		{
			cnt++;
		}
	}
	int ans=n-cnt;
	cout<<ans;
	return 0;
}