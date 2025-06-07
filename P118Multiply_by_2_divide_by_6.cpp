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
        int cnt3=0,cnt2=0,flag=0;
        while(n>1 &&flag!=1)
        {
            if(n%2==0 && cnt3 >cnt2)
            {
                 n=n/2;
                cnt2++;
               
            }
            else if(n%3==0)
            {
                 n=n/3;
                cnt3++;
               
            }else{
               flag=1;
            }
        }
        if(flag==1)
        {
            cout<<"-1\n";
        }
        else{
        int ans =2*cnt3-cnt2;
        cout<<ans<<"\n";
        }

    }
}
