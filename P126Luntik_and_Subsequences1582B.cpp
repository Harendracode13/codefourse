#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        vector<long long> v(n);
        int cnt0 = 0, cnt1 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 0)
            {
                cnt0++;
            }
            if (v[i] == 1)
            {
                cnt1++;
            }
        }
        if (cnt1 == 0)
        {
            cout << 0 << "\n";
        }
        else
        {
            long long result = pow(2, cnt0)*cnt1;
            cout << result << "\n";
        }
    }
}