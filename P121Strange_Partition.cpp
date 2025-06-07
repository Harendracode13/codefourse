#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long n,x;
        cin>>n>>x;
        vector<long long> v(n);
        for(long long i=0;i<n;i++)
        {
            cin>>v[i];
        }
        long long  min_sum=0,max_sum=0;
        for(long long i=0;i<n;i++)
        {
            min_sum+=v[i];
            max_sum+=ceil((double)v[i]/x);
        }
        min_sum=ceil((double)min_sum/x);
        cout<<min_sum<<" "<<max_sum<<"\n";
    }
}