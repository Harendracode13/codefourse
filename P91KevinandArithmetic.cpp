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
        int ans=0;
		int sum=0;
        vector<int> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
            if(v[i]%2==0)
			{
				ans++;
			}
		}
		if(ans!=0)
		{
			ans=n-(ans-1);
		}
		else{
			ans=0;
			ans=n-1;
		}
		cout<<ans<<"\n";
	}
}