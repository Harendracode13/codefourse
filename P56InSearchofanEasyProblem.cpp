#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		if(v[i]==1)
		{
			cout<<"HARD\n";
			return 0;
		}
	}
	cout<<"EASY\n";
	return 0;
}