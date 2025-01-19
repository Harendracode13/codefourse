#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int ans=0;

		int x,y;

		for(int i=0;i<n;i++)
		{
			cin>>x>>y;
			int temp=0;
			if(i==0 || i==n-1)
			{
			  ans=ans+m-(x+y);
			  temp=x+y;
			}
			else{
				ans=ans+ 2*(x+y)-temp;
				temp=x+y;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}