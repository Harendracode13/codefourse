#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long n,m;
        cin>>n>>m;

        vector<long long> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end(),greater<int>());

        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                m=m-v[i]*2-1;
            }
            else if(i==n-1)
            {
                m--;
            }
            else{
                m=m-v[i]-1;
            }
        }
        if(m>=0)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"No\n";
        }
    }
}
