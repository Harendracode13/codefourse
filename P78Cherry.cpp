#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, m = 0;
    cin >> n;
    long long a[n];
    cin >> a[0];
    for(int i=1;i<n;i++)
    {
        cin >> a[i];
        m = max(m, a[i - 1] * a[i]);
    }
    cout << m << "\n";
}
 
 
 
int main() 
{
    int t;
    cin >> t ;
    while(t--)
	{
        solve() ;
	}
}