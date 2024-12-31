#include<bits/stdc++.h>
using namespace std;
void solve(string& x ,string& s)
{
	int n,m,cnt=6 ,f=0,res=0;
     while(cnt--)
	 {
		if(x.find(s)!= string::npos){
			f=1;
			break;
		}
		res++;
		x+=x;
	 }
	 if(f==1)
	 {
		cout<<res;
	 }
	 else{
		cout<<-1;
	 }
}

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n,m;
		cin>>n>>m;

		if(n*m >25)
		{
			return 0;
		}
		string x,s;
		cin >>x>>s; //getting the string

		solve(x,s);
       cout<<"\n";
	}
	return 0;
}