#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	cin>>n;

    int count=0;
	while(n>0)
	{
		if(n%10==4 || n%10==7)
		{
			count++;
		}
		n/=10;
	}

	if(count==7 || count==4)
	{
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}
	
	return 0;
}