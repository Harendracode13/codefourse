#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
   string s;
	cin>>t;
	while(t--){
		cin>>n>>s;
		int x=0,y=0;
		for(int i=0;i<s.size();i++)
			if(s[i]=='1')x++;
			else if(!i||s[i]!=s[i-1])y++;
		cout<<(x>y?"Yes":"No")<<"\n";
	}
	return 0;
}