#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int c=0;
    int d=0;
    int i=0,j=0;
    while(i<n && j<n)
    {
        if(a[i]<=b[j])
        {
            c++;
            i++;
        }
        else
        {
            d++;
            j++;
        }
    }
    if(d>c)cout<<"Second"<<"\n";
    else cout<<"First"<<"\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}