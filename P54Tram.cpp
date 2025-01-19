#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int capacity=0;
	int x;

	vector<int> a(n),b(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		cin>>b[i];
	}
    
	
	capacity=b[0];
	for(int i=0;i<n-1;i++)
	{
		
		b[i+1]=b[i]-a[i+1]+b[i+1];
		if(capacity<b[i])
		{
		capacity=b[i];
		}
	}

	cout<<capacity;
	return 0;
}