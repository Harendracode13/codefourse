#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    vector<int> v(n);
    int sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        sum +=v[i];
    }
    sort(v.begin(), v.end(),greater<int>());
    int sum1=0;
    int i;
    for( i=0; i<n; i++)
    {
        sum1 += v[i];
       if(sum1>sum-sum1)
       {
        break;
       }
    }
    cout<<i+1;
}