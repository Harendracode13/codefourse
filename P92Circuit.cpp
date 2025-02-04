#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;
		int cnt=0,maxi=0,mini=0;

		vector<int> v(2*n);
		for(int i=0;i<2*n;i++)
		{
			cin>>v[i];
			if(v[i]==1)
			{
				cnt++;
			}
		}
		if(n%2==0){
			if(cnt%2==0 && cnt<=n/2)
			{
				mini=0;
				maxi=cnt;
			}
			else if(cnt%2==0 && cnt>n/2) {
				mini=0;
				maxi=(2*n)-cnt;
			}
			else if(cnt%2!=0 && cnt<=n/2){
				mini=1;
				maxi=cnt;
			}
			else{
				mini=1;
				maxi=(2*n)-cnt;
			}
		}
		else{
			if(cnt%2==0 && cnt<=n/2+1)
			{
				mini=0;
				maxi=cnt;
			}
			else if(cnt%2==0 && cnt>n/2+1) {
				mini=0;
				maxi=(2*n)-cnt;
			}
			else if(cnt%2!=0 && cnt<=n/2+1){
				mini=1;
				maxi=cnt;
			}
			else{
				mini=1;
				maxi=(2*n)-cnt;
			}
		}
			cout<<mini<<" "<<maxi<<"\n";
	}
}