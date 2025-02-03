#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		bool yes=1;
		for(int i=1,x;i<=n;i++){
			cin>>x;
			int d=max(i-1,n-i);
			if(x<=d*2) yes=0;
		}
		cout<<(yes?"Yes":"No")<<"\n";
	}
} 