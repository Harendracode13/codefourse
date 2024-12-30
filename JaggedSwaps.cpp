#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int solve(int n, vector<int> &v)
{
	 bool sorted = false;
    while (!sorted) {
        sorted = true; 
	for (int i = 1; i < n - 1; i++)
	{
		if (v[i - 1] < v[i] && v[i] > v[i + 1])
		{
			int temp = v[i];
			v[i] = v[i + 1];
			v[i + 1] = temp;
			sorted = false;
		}
	}
	}
	if (is_sorted(v.begin(), v.end()))
	{
		return 1;
	}
	else
		return 0;
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
		int x;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			v.push_back(x);
		}
		string ans = solve(n, v) ? "Yes" : "No";
		cout << ans << endl;
	}
	return 0;
}