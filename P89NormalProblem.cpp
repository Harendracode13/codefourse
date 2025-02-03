#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		int n = s.length();
		for (int i = 0; i < n / 2; i++)
		{
			char c = s[i];
			s[i] = s[n - i - 1];
			s[n - i - 1] = c;
		}

		for (int i = 0; i < n; i++)
		{
			if (s[i] == 'p')
			{
				s[i] = 'q';
			}
			else if(s[i] == 'w')
			{
				s[i] = 'w';
			}
			else{
				s[i]='p';
			}
		}

		for (int i = 0; i < n; i++)
		{
			cout << s[i];
		}
		cout << "\n";
	}
}