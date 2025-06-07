#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,f,a,b;
        cin>>n>>f>>a>>b;
        vector<long long> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long long ans=0,diff=0;
        ans =min((v[0]-0)*a,b);
        for(int i=1;i<n;i++){
            ans+=min((v[i]-v[i-1])*a,b);
        }
    
        if(ans <f){
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
}