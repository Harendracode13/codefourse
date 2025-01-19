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
		int x=1;
		int i=k-1;

		while(i<n)
		{
			v[i]=x;
			i=i+k;
			x++;
		}
        int t=1;
		for(int i=0;i<n;i++)
		{
			if(i==(k*t)-1)
			{
				t++;
			}
			else{
				v[i]=x;
				x++;
			}
		}

		for(int i=0;i<n;i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<"\n";
	}
}