#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	int opertion = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if ((v[i] % 2 == 0 && v[i + 1] % 2 == 0) || (v[i] % 2 != 0 && v[i + 1] % 2 != 0))
		{
			opertion++;
		}
	}
	cout<<opertion<<"\n";
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
}