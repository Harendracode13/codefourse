#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        long long n, q;
        cin >> n >> q;
        vector<int> v(n);
        long long sum = 0;
        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        vector<long long> prefix_sum(n + 1, 0);
        for (long long i = 1; i <= n; i++)
        {
            prefix_sum[i] = prefix_sum[i - 1] + v[i - 1];
        }
        for (long long i = 0; i < q; i++)
        {
            long long l, r, k;
            cin >> l >> r >> k;
            long long remove_sum = prefix_sum[r] - prefix_sum[l - 1];
            long long sum_to_add = (r - l + 1) * k;
            long long total_sum = sum - remove_sum + sum_to_add;
            if (total_sum % 2 == 0)
            {
                cout << "No\n";
            }
            else
            {
                cout << "Yes\n";
            }
        }
    }
}