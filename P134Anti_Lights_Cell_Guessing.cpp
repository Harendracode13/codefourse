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
        long long ans;
        if(n==1 && m==1)
        {
            ans=0;
        }
        else if(n==1 ||m==1){
            ans=1;
        }
        else
        {
            ans=2;
        }
        cout<<ans<<"\n";
    }
    return 0;

}