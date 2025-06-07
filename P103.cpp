#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
    long long X,Y,K;
    cin>>X>>Y>>K;

    int n=min(X,Y);
    cout<<0<<" "<<0<<" "<<n<<" "<<n<<"\n";
    cout<<0<<" "<<n<<" "<<n<<" "<<0<<"\n";
    }
} 