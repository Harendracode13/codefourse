#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		string s;
		map<char, int> m;
		cin >> s;
		for (auto element : s)
		{
			m[element]++;
		}
		
		
		char c=s[0],l=s[0];
		
		int ans = 0;
		auto i=m.begin();
		int low=i->second;
		 for (auto &entry : m) {
            if ( ans< entry.second) {
                c = entry.first; 
                ans= entry.second;
            }
			if(entry.second<low)
			{
				l=entry.first;
				low=entry.second;
			}
        }

		for(int i=0;i<n;i++)
		{
			if(s[i]!=l)
			{
				s[i]=c;
				cout<<s<<"\n";
				break;
			}
		}

	}
	return 0;
}