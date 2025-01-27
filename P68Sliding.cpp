#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	cin>>t;

	while(t--){
	long long n,m ,r,c;
	cin>>n>>m>>r>>c;

	long long ans=(n-r)*m+(m-c)+(n-r)*(m-1);
	cout<<ans<<"\n";
	}
	return 0;
} 