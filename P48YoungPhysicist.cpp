#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<vector<int>> v(n, vector<int>(3)); 
	int sum=0;

for(int i=0;i<n;i++){
	for(int j=0;j<3;j++)
	{
		cin>>v[i][j];
	}
	if (sum!=0)
	{
		cout<<"NO\n";
		break;
	}
}

for(int i=0;i<3;i++){
	for(int j=0;j<n;j++)
	{
		sum+=v[j][i];
	}
	if (sum!=0)
	{
		cout<<"NO\n";
	   return 0;
	}
}

cout<<"YES\n";
return 0;
}