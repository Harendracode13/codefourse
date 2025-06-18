#include<bits/stdc++.h>
using namespace std;

bool solve(int n)
{
    int sum=0;
    if(sum==n)
    {
        return true;
    }
    if(n<2020)
    {
        return false;
    }

    bool left=solve(n-2020);
    bool right=false;
    if(left!=true)  right=solve(n-2021);

    return left||right;
}

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

       bool ans= solve(n);
       if(ans)
       {
        cout<<"Yes\n";
       }
       else{
        cout<<"No\n";
       }
    }
}