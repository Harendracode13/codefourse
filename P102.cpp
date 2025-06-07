#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
	 int cnt=0;
		map<int ,string > m(s);
		int sizeofmap=m.size();
		 for (auto x: m)
		 {
			if(x.first % 2==0)
			{
				cnt++;
			}
		 }
         int remaining =sizeofmap-cnt;
		 int ans =remaining-k;
		 if(ans==0 || ans==1)
		 {
			cout<<"YES\n";
		 }
		 else{
			cout<<"NO\n";
		 }
	}
}