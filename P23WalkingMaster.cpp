#include<bits/stdc++.h>
using namespace std;

void solve()
{
   long long a,b,c,d;
   cin>>a>>b>>c>>d;

   if(b>d)
   {
	cout<<-1<<"\n";
   }
   else{
	if((a+d-b)<c)
	{
		cout<<-1<<"\n";
	}
	else{
		cout<<(2*(d-b)+a-c)<<"\n";
	}
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