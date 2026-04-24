#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n<2)
        {
            cout<<0<<endl;
        }
        else if(n%2==0 )
        {
            long long t=(n-1)/2;
            cout<<t<<endl;
        }
        else
        {
            long long t=n/2;
            cout<<t<<endl;
        }
       
    }
    return 0;
}