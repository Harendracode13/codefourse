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
		vector<int> result;
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
       int cnt=0;
	   int temp=0;
		for(int i=0;i<n-1;i++)
		{
            
			for(int j=i+1;j<n;j++)
			{
		
				if(v[i]+v[j]==k)
				{
					cnt++;
				}
			}
		}
		cout<<cnt<<"\n";
	}
}