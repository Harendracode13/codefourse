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
		vector<int> w(n),h(n);
		int width=0;
	   int height=0;
		for(int i=0;i<n;i++)
		{
			cin>>w[i]>>h[i];
			if(width<w[i])
			{
				width=w[i];
			}
			if(height<h[i])
			{
				height=h[i];
			}
		}
		int ans=2*(width+height);
		cout<<ans<<"\n";
	}
}