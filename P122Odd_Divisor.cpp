#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        int flag=0,i=3;
        int temp=INT32_MAX;
      while(i<temp && flag!=1 )
            if(n%i==0 ||n%2==11)
            {
                cout<<"Yes\n";
                
                flag=1;
            }
            i+2;
            temp=ceil(double(n/i));
        
        if(flag!=1)
        {
            cout<<"No\n";
        }
    }
}