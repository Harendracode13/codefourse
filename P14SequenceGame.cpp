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

	if (v.size() == 1)
	{
		cout << n << "\n"<< v[0] << "\n";
		return;
	}
	vector<int> result;
    result.push_back(v[0]);
	
    int x=n;
	for (int i = 1; i < x; i++)
	{
		if (v[i - 1] > v[i])
		{
			n++;
			result.push_back(v[i]);
		}
	result.push_back(v[i]);
	}

	cout << n << "\n";
	for (auto i : result)
	{
		cout << i << " ";
	}
	cout << "\n";
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