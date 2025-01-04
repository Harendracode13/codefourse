#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	vector<int> v(n);
	int index=0,opration=0;
   
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}

	  if(!is_sorted(v.begin(),v.end()))
	 {
		cout<<opration<<"\n";
		return;
	 }

	int minvalue=v[1]-v[0];
    for (int i = 1; i < n; i++) {
        int diff = v[i] - v[i - 1];
        if (diff < minvalue) {
            minvalue = diff;
            index = i - 1;
        }
    }
	
	if(v[index]<=v[index+1] && minvalue%2==0)
		opration=minvalue/2;
	opration=(minvalue/2)+1;

	cout<<opration<<"\n";
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}