#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;
		vector<int> v(n);
		int sum=0;
		int multi=1;
		int ans=0;
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
			
			sum+=v[i];
			multi=multi*v[i];
		}
		bool t=true;
		while(t)
		{	
			if(sum<0 ||  multi !=1)
			{
               sum=sum+2;
			   multi=(-1)*multi;
			   ans++;
			}
			else{
				t=false;
			}
		}
		cout<<ans<<"\n";
	}
}