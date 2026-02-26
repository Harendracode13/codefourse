#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,s,x;
        cin>>n>>s>>x;
        vector<long long> a(n);
         long long sum=0;
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
            
        if(sum>s){
            cout<<"no\n";
        }
        else if((s-sum)%x==0){
            cout<<"yes\n";
        }
        else if(x==1){
            cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }
    }

}