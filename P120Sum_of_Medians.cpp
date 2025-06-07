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
        long long mult=n*k;
       vector<long long>v(mult);
       for(long long i=0;i<mult;i++)
       {
       cin>>v[i];
       }

       int median=n/2;
       long long sum=0;
       for(long long i=1;i<=k;i++)
       {
        long long index=mult-((median+1)*i);  
        sum+=v[index];
       }
       cout<<sum<<"\n";
      
    }
}