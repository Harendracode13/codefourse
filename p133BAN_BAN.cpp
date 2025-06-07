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
       int m;
       if(n%2!=0)
       {
              m=(n/2)+1;
              cout<<m<<"\n";
       }
       else{
              m=n/2;
              cout<<m<<"\n";
       }
       int i=-3,j=-2;
       if(n==1)
       {
            cout<<1<<" "<<2<<"\n";
       }
       
       while(m!=0 && n%2!=0 && n!=1){
             if(m==1)
             {
              i=i+3;
              j=j+3;
              cout<<i<<" "<<j<<"\n";
              m--;
             }
             else{
              i=i+6;
              j=j+6;
              cout<<i<<" "<<j<<"\n";
              m--;
             }

       }
       while(m!=0 && n%2==0){
             if(m==1)
             {
              i=i+6;
              j=j+6;
              cout<<i<<" "<<j<<"\n";
              m--;
             }
             else{
              i=i+6;
              j=j+6;
              cout<<i<<" "<<j<<"\n";
              m--;
             }

       }
 }


}