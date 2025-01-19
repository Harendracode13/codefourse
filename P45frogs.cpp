#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n,a,b;
    cin>>n>>a>>b;

   int ans=abs(a-b-1);

   if(ans%2 !=0)
   {
	cout<<"Yes\n";
   }
   else{
	cout<<"No\n";
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
	return 0;

}