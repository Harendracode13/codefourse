#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s >> t;
        map<char, int> m;
        for (auto i : t)
            m[i]++;
        string ans;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (m[s[i]])
            {
                ans += s[i];
                m[s[i]]--;
            }
        }
        reverse(ans.begin(), ans.end());
        if (ans == t)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}