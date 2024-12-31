#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void solve(vector<int> v)
{
	map<int, int> m;

	for (int element : v)
	{
		m[element]++;
	}

	if (m.size() == 2)
	{
		auto it1 = m.begin();
		auto it2 = next(it1);
		int dif = abs(it1->second - it2->second);

		if (it1->second == it2->second)
		{
			cout << "Yes";
		}
		else if (dif == 1)
		{
			cout << "Yes";
		}
		else
		{
			cout << "No";
		}
	}

	else if (m.size() == 1)
	{
		cout << "Yes";
	}

	else
	{
		cout << "No";
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> v;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			v.push_back(x);
		}
		solve(v);
	}
	return 0;
}