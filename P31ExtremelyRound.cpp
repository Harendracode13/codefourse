#include <bits/stdc++.h>
using namespace std;

bool check(int num)
{
	int cnt = 0;

	while (num > 0)
	{
		int d = num % 10;
		if (d != 0)
		{
			cnt++;
		}
		num = num / 10;
	}
	return cnt == 1;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;


      vector<int> canddidate;
		for (int i = 0; i < 1e7; i++)
		{
			if (check(i))
			{
				canddidate.push_back(i);
			}
		}
		int cnt =0;
		for(auto it:canddidate)
		{
			if(it<=n)
			cnt++;
		}

		cout<<cnt<<"\n";
	}
	return 0;
}
