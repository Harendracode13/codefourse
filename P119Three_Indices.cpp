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

        vector<int> v(n);

        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int flag=0;
        int i;
        for( i=1;i<n-1;i++)
        {
            if(v[i-1]<v[i]&& v[i]>v[i+1])
            {
                flag=1;
            }
            if(flag==1){
                break;
            }
        }
        if(flag==1)
        {
            cout<<"Yes\n";
            cout<<i<<" "<<i+1<<" "<<i+2<<"\n";
        }
        else{
            cout<<"No\n";
        }
    }
}