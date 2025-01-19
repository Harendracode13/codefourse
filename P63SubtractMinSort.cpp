#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
		cin>>n;
		vector<int> v(n);

		for(int i=0;i<n;i++)
		{
			cin>>v[i];
			
		}

		if (is_sorted(v.begin(), v.end()))
		{
         cout << "Yes\n";
	    }
		else{
        int mini;
		for(int i=0;i<n-1;i++)
		{
			if(v[i]>v[i+1]){
				cout<<"No\n";
				return ;
			}
			else{
              mini=min(v[i],v[i+1]);
			  v[i]-=mini;
			  v[i+1]-=mini;
			}
		}
		cout<<"Yes\n";

		}
}

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		solve();
	}
}