#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long n,k,x;
        cin>>n>>k>>x;

        long long mini_sum=k*(k+1)/2;
        long long maxi_sum=(n*(n+1)/2)-((n-k)*(n-k+1))/2;

        if(x>=mini_sum  && x<=maxi_sum)
        {
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
}