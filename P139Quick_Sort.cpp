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
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int c_v = 1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == c_v)
                c_v++;
        }
      
        cout << (n - c_v + k) / k << "\n";
    }
}