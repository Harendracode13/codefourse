#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        int n=s.length();
        if(s[0]!=s[n-1])
        {
            s[0]=s[n-1];
            cout<<s<<"\n";
        }
        else{
            cout<<s<<"\n";
        }
    }
}