#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int cnt=0;
        int tempi=0;
        int lasti=0;
        for(int i=1;i<=n;i++)
        {
            if(v[i]-v[i-1]<=k && i<n &&n!=1)
            {
               
            }
            else
            {
                tempi=i-lasti;
                lasti=i;
                cnt = max(tempi,cnt);
            }
        }
         int ans=0;
         ans=n-cnt;
        cout<<ans<<"\n";
    }
}