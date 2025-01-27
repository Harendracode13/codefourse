#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
       long long ans=1;
          while(n>3)
		  {
			ans=ans*2;
			n=n/4;
		  }
		  cout<<ans<<"\n";
	}
}