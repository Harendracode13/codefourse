#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	bool yes=true;
	while(n)
	{
		if(yes)
		{
			cout<<"I hate ";
			yes=!yes;
		}
		else
		{
         cout<<"I love ";
		 yes=!yes;
		}
		
		if(n==1)
		{
			cout<<"it";
			return 0;
		}
		cout<<"that ";
		n--;
   }
}