#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        long long n, p;
        cin >> n >> p;

        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        vector<pair<long long, long long>> v;
        for (int i = 0; i < n; i++)
            v.push_back({b[i], a[i]});

        sort(v.begin(), v.end());

        long long ans = p;      // first direct inform
        long long informed = 1; // already informed

        for (int i = 0; i < n && informed < n; i++)
        {
            if (v[i].first >= p)
                break;

            long long can_share = min(v[i].second, n - informed);
            ans += can_share * v[i].first;
            informed += can_share;
        }

        if (informed < n)
        {
            ans += (n - informed) * p;
        }

        cout << ans << "\n";
    }

    return 0;
}