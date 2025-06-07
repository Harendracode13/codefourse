#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,m,i,j;
        cin>>n>>m>>i>>j;

        long long x1,y1,x2,y2;
        x1=(i-1)*(i-1)+(j-1)*(j-1);
        y1=(i-1)*(i-1)+(j-m)*(j-m);

        if(x1>y1)
        {
            cout<<1<<" "<<1<<" "<<n<<" "<<m<<"\n";
        }
        else{
            cout<<1<<" "<<m<<" "<<n<<" "<<1<<"\n";
        }
    }
}