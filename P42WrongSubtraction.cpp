#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int mod=n;

	for(int i=0;i<k;i++)
	{
		mod=n%10;
		if(mod!=0)
		{
			n=n-1;
		}
		else{
           n=n/10;
		}
	}
	cout<<n;
	return 0;
}