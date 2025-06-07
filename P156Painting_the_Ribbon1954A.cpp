#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		int k=0;
		if(a%b!=0) k++;
		if(a-(a/b+k)>c) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}