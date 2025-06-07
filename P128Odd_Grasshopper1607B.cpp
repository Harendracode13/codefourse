#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long x,n;
        cin>>x>>n;

        if(abs(x)%2==0)
        {
            if(abs(n)%4==1) cout<<x-n<<"\n";
            else if(abs(n)%4==2) cout<<x+1<<"\n";
            else if(abs(n)%4==3) cout<<x+n+1<<"\n";
            else cout<<x<<"\n";
        }
        else{
            if(abs(n)%4==1) cout<<x+n<<"\n";
            else if(abs(n)%4==2) cout<<x-1<<"\n";
            else if(abs(n)%4==3) cout<<x+-n-1<<"\n";
            else cout<<x<<"\n";
        }
    }
}