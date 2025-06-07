 #include<bits/stdc++.h>
 using namespace std;

 int main()
 {
    long long t;
    cin>>t;

    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long> v(n);
        map<long long,long long> m;
        for(long long i=0;i<n;i++)
        {
            cin>>v[i];
        }

        for(auto i:v){
            m[i]++;
        }
        long long maxm=0;
         for (auto it = m.begin(); it != m.end(); ++it) 
         {
            if(it->second>maxm)
            {
                maxm=it->second;
            }
         }
         
         long long ans=n-maxm;
         long long coutsame=maxm;
         
         while(coutsame<n && ans!=0)
         {
            coutsame=coutsame*2;
            ans++;
         }
         cout<<ans<<"\n";
    }
 }