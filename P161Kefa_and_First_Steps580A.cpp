#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans =1;
    int cnt=1;
    for (int i = 1; i < n; i++)
    {
        if (v[i] >= v[i - 1])
        {
            cnt++;
            ans = max(ans, cnt);
        }
        else{
            cnt=1;
        }
    }
    cout<<ans;
}