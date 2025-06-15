#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> dp(n+1, 0);
    dp[0] = 2;
    for (int i = 2; i <= n; i = i + 2)
    {

        if (n % 2 != 0 || n==0)
        { 
            dp[n] = 0;
            break;
        }
        if (i == 2)
        {
            dp[i] = 2;
        }
        else{
        dp[i] = dp[i - 2] * 2;
        }
    }
    cout << dp[n];
    
    return 0;
}