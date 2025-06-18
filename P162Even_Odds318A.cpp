#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;

    long long oddn=0,evenn=0;
    if(n%2!=0)
    {
         oddn=(n+1)/2;
         evenn=n-oddn;
    }
    else{
         oddn=n/2;
         evenn=n-oddn;
    }
    if(oddn>=k){
        cout<<(2*k)-1;
    }
    else{
        cout<<2*(k-oddn);
    }
}
