#include <bits/stdc++.h>
// #include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		int t=-1,a[15]={0};
		if(n%25==0){
			cout<<0<<"\n";continue;
		}
		while(n>0){
			int k=n%10;
			if(k==2&&a[5]>0 ||k==0&&a[0]>0 ||k==5&&a[0]>0 ||k==7 &&a[5]>0){
				break;
			}
			a[k]++;
			t++;
			n/=10;
		}
		cout<<t<<"\n";
	}
} 

        					 	 		 	 	 		 	   	