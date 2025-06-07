#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        vector<long long > v={0,0,0};

        for(int i=0;i<3;i++)
        {
            cin>>v[i];
        } 
        sort(v.begin(),v.end());
        int ans=0;
        if(v[0]==v[1]&& v[1]==v[2])
        {
            cout<<"Yes\n";
        }
        else if(v[2]%v[0]==0 &&v[1]%v[0]==0 && ((v[2]/v[0])-1 +(v[1]/v[0]-1))<=3)
        {
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
}