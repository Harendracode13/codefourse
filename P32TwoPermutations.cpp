#include<bits/stdc++.h>
using namespace std;

int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b;
		cin>>n>>a>>b;

		if(a+b>=n-1)
		{
			if(a==n &&b==n)
			{
				 cout<<"Yes\n";
			}
			else{
				cout<<"No\n";
			}
		}
		else{
			cout<<"Yes\n";
		}

	}
	
	return 0;
}