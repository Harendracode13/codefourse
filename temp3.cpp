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

        // Invalid if odd or exactly 2
        if (n % 2 != 0 || n == 2)
        {
            cout << -1 << "\n";
        }
        else
        {
            long long maxi = n / 4;  
            long long mini = (n + 5) / 6;
            if (mini * 6 > n || maxi * 4 < n)
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << mini << " " << maxi << "\n";
            }
        }
    }
    return 0;
}
