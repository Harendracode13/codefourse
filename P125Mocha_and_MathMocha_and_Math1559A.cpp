#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long total_and = v[0];
        for (int i = 1; i < n; i++)
        {
            total_and &= v[i];
        }
        cout << total_and << "\n";
    }
}