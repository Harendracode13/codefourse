#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<pair<long long, long long>> v;

        for (long long i = 0; i < n; i++)
        {
            long long a;
            cin >> a;

            long long rem = a % k;
            if (rem == 0)
                rem = k;

            v.push_back({rem, i + 1});
        }

        sort(v.begin(), v.end(), [](auto &a, auto &b)
             {
    if(a.first != b.first)
        return a.first > b.first;
    return a.second < b.second; });

        for (auto &p : v)
        {
            cout << p.second << " ";
        }
        cout << endl;
    }
}