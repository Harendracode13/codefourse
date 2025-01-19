#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,f;
	cin>>n>>f;
	vector<int> a(n);
	int sum=0;

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>f)
		{
			sum+=2;
		}
		else{
			sum++;
		}
	}
	cout<<sum;
	return 0;	
}