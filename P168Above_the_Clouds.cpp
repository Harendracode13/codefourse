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
        cin >> s;

        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        bool ans = true;
        for (auto it : mp)
        {
            if (it.first == s[0])
            {
                if (it.second > 2 || s[0]==s[1])
                {
                    cout << "Yes" << endl;
                    ans = false;
                    break;
                }
            }
                else
                {
                    if (it.second > 1)
                    {
                        cout << "Yes" << endl;
                        ans = false;
                        break;
                    }
                }
            
        }
         if (ans)
            {
                cout << "No" << endl;
            }
    }
}