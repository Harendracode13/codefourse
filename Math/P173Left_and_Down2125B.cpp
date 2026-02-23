#include<bits/stdc++.h>
#include <numeric>

using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long a,b,k;
        cin>>a>>b>>k;
		long long p=gcd(a,b);

		cout<<(a/p<=k&&b/p<=k?1:2)<<'\n';
	}
    return 0;
}