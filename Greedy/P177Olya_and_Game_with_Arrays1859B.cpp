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
      vector<vector<long long>> v(n,vector<long long>());
        for(long long i=0;i<n;i++)
        {
            long long x;
            cin>>x;
            v[i].reserve(x);
            for(long long j=0;j<x;j++)
            {
              long long val;
              cin>>val;
              v[i].push_back(val);
            }
            sort(v[i].begin(),v[i].end());
        }
        long long ans=0;
       vector<long long> difference(n,0);
       long long temp=LLONG_MAX;
       long long index=0;
       long long smallest=LLONG_MAX;
        for (long long i=0;i<n;i++)
        {
            if(v[i][0]<smallest) smallest=v[i][0];
           if(v[i][1]<temp)
           {
                temp=v[i][1];
                index=i;
           }
        } 
        for(long long i=0;i<n;i++)
        {
            if(i!=index && v[i].size()>1)
            {
                ans+=v[i][1];
            }
        }
        if(v[index].size()>0) ans+=smallest;
        cout<<ans<<endl;
    }
    return 0;
}