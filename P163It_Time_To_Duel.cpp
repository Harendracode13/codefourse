#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        map<int,int> mp;
        for(auto &x : v)
        {
            mp[x]++;
        }
       bool ans =false;
       for(int i=0; i<n-1; i++)
       {
           if((v[i] == 0 && v[i+1] == 0) || mp.size() == 1)
           {
               ans = true;
               break;
           }
           
           if(n==2 && v[i]==1 && v[i+1]==1)
           {
               ans = true;
               break;
           }
       }
       if(ans)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
    }
}