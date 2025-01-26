#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin>>n;
		int a = 1;
		for (int i = 1; i <= n; i++)
		{
			bool yes = true;
			while (yes)
			{
				if (a % i == (i - 1))
				{
					cout << a << " ";
					yes = false;
				}
				a++;
			}
		}
		cout << "\n";
	}
	
	return 0;
}