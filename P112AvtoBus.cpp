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

        if (n % 2 == 1 || n<4 )
        {
            cout << -1<<"\n";
        }
        else
        {
            long long mini = ceil(n*1.0 /6);
            long long maxi=n/4;
            cout<<mini<<" "<<maxi<<"\n";
        }
    }
    return 0;
}
