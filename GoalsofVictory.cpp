#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		int ans=0;
		cin>>n;

		for(int i=0;i<n-1;i++)
		{
			int x;
			cin>>x;
			ans=ans+x;
		}
		ans =(-1)*ans;
		cout<<ans<<"\n";
	}
	
	return 0;
}