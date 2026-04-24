#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,k,q;
        cin>>n>>k>>q;
        vector<long long> v(n);
        for(long long i=0;i<n;i++) cin>>v[i];
        long long right=0;
        vector<long long>ans;
       
            for(long long i=0;i<n;i++)
            {
                if(v[i]<=q)
                {
                    right++;     
                }   
                 else {
                    ans.push_back(right);  
                    right=0;
                 }
            }
            ans.push_back(right);
            long long count=0;
            long long b=0;
            for(long long i=0;i<ans.size();i++)
            {
                if(ans[i]>=k)
                {
                    b=ans[i]-k+1;
                    count+=(b*(b+1))/2;
               }
            }
            cout<<count<<endl;

    }
}