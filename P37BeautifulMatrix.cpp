#include<bits/stdc++.h>
using namespace std;

int main()
{

	 vector<vector<int>> v(5, vector<int>(5)); 
	for (int i = 0; i < 5; i++)
	{
	   for (int j = 0; j < 5; j++)
	   {
		cin>>v[i][j];
		if(v[i][j]==1)
		{
			int a=abs(3-(i+1));
			int b=abs(3-(j+1));
			int ans=a+b;
			cout<<ans;
			break;
		}
	   }
	}
	return 0;
}