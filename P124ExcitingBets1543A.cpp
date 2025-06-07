#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        long long x, y;
        cin >> x >> y;

        if (x == y)
        {
            cout << 0 << " " << 0 << "\n";
        }
        else
        {
            long long ans=abs(x-y);
            long long amove=max(x,y)%ans;
            long long bmove=ans-max(x,y)%ans;
             cout<<ans<<' '<<min(amove,bmove)<<'\n';
        }
    }
}