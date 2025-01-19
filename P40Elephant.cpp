#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int x=0;
	int step=0;
	int dif;
	bool yes=true;
	while(yes)
	{
		if(n>=5)
		{
			x+=5;
			n=n-5;
			step++;
		}
		else{
			if(n==0)
			{
				yes=false;
			}
			else{
				step++;
				yes=false;
			}
		}
	}
	cout<<step;
return 0;
}