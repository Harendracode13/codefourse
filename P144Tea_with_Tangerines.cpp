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
        vector<int> v(n);
        int ans = 0;
        for (auto &i : v)
        {
            cin >> i;
            ans += (i - 1) / (2 * v[0] - 1);
        }
        cout << ans << '\n';
    }
    return 0;
}