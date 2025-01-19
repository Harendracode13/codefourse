#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m,n;
	cin>>m>>n;
	int i=0;
	while(2*i<m*n)
	{
		if((2*i)+2>m*n)
		{
			break;
		}
		i++;
	}

	if(n==1&&m==1)
	{
		cout<<0;
	}
	else{
		cout<<i;
	}
	return 0;
}