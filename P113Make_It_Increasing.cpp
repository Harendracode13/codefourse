#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long> v(n);
        for(long long i=0;i<n;i++)
        {
            cin>>v[i];
        }
        long long ans=0;
        for(int i=n-2;0<=i;i--)
        {
           while(v[i]>=v[i+1])
           {
            ans++;
            v[i]/=2;
            if(v[i]==0)
            {
                break;
            }
        }
            if(v[i]==0 && v[i+1]==0)
            {
                ans=-1;
                break;
            }
        }
        cout<<ans<<"\n";
    }
}