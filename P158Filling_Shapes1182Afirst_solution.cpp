#include<bits/stdc++.h>
using namespace std;
int solve(int n,vector<int>& dp)
{
    if(n%2!=0) return 0; // Base case: no way to fill negative length
    if(dp[n] != -1) return dp[n]; // Return cached result

    // Recursive case: fill the shape with 2x1 tiles
    dp[n] = solve(n-2, dp) * 2; // Each time we can place a tile vertically or horizontally
    return dp[n];
}

int main()
{
    int n;
    cin>>n;
    vector<int> dp(n+1, -1);
    dp[2] = 2; // Base case: 1 way to fill a 0-length shape
    cout<<solve(n,dp)<<endl;
    return 0;
    
}