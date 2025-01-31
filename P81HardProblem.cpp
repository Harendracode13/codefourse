#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int m, a, b, c;
		cin >> m >> a >> b >> c;

		int row1=m;
		int row2=m;

		int ans = 0;
		if (row1>=a)
		{
			ans+=a;
			row1-=a;
		}
		else{
			ans+=row1;
			row1=0;
		}
		if(row2>=b)
		{
			ans+=b;
			row2-=b;
		}
		else{
			ans+=row2;
			row2=0;
		}
		if(row1+row2>=c)
		{
			ans+=c;
		}
		else{
			ans+=row1+row2;
		}
		cout<<ans<<"\n";
	}

	return 0;
}