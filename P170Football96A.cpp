#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.length();
    int cnt = 0, i = 0;
    int hash[2]={0,0};
   while(i<n && hash[0]<7 && hash[1]<7)
   {
    if(s[i]== '1')
    {
        hash[0]=0;
        hash[1]++;
    }
    else
    {
        hash[1]=0;
        hash[0]++;
    }
    i++;
   }
    if(hash[0]>=7 || hash[1]>=7)
    {
         cout<<"YES"<<endl;
    }
    else
    {
         cout<<"NO"<<endl;
    }
}