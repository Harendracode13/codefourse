#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n,k;
		cin>>n>>k;

		vector<int> v(n);
		int ans=0;
		int cnt=0;
		for(int i=0;i<n;i++)
		{
			cin>>v[i]; 
		}

 
        for(int i=0;i<n;i++)
		{

			if(v[i]>=k)
			{
				ans+=v[i];
			}
			if(ans!=0 && v[i]==0)
			{
				ans--;
				cnt++;
			}
		}
		cout<<cnt<<"\n";


	}
}

