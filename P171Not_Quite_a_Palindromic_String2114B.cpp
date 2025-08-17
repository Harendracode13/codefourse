#include<bits/stdc++.h>
using namespace std ;
	int t,n,k;
	string s;
int main() {
	cin>>t;
	while(t--){
		cin>>n>>k;
		cin>>s;
		int cnt0=0,cnt1=0;
		for(int i=0;i<n;i++){
			if(s[i]=='0')cnt0++;
			else cnt1++;
		}
		int h=n/2,p=h-k;
		if(cnt0>=p&&cnt1>=p&&(cnt0-p)%2==0)cout<<"yes"<<"\n";
		else cout<<"no"<<"\n";
		
	}
 
}
 