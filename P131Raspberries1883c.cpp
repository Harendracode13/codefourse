#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;

    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        int ans = INT_MAX;
        int event_count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 0)
            {
                event_count++;
            }
            if (v[i] % k == 0)
            {
                ans = 0;
            }
            ans = min(ans, k - v[i] % k);
        }
        if (k == 4)
        {
            if (event_count >= 2)
            {
                ans = min(ans, 0);
            }
            else if (event_count == 1)
            {
                ans = min(ans, 1);
            }
            else
            {
                ans=min(ans, 2);
            }
            
        }
        cout << ans << "\n";
    }
}