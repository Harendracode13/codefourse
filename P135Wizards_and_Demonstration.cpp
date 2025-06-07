#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n, x, y;
    cin >> n >> x >> y;

    y = y / 100;
    n = n * y;
    int ans = int(ceil(n - x));
    if (ans <= 0)
    {
        cout << 0;
    }
    else
    {
        cout << ans;
    }
}
