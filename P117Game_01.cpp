#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;
      int c1=0,c2=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')
            {
                c1++;
               }
            else{
                c2++;
            }
        }
       int cnt =min(c1,c2);
        if(cnt%2==0 )
        {
            cout<<"NET"<<"\n";
        }
        else{
            cout<<"DA"<<"\n";
        }
    }
    return 0;
}