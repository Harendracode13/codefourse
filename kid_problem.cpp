#include<bits/stdc++.h>
using namespace std;

int main()
{
		int n;
		cin>>n;
		vector<int> v;
		for(int i=0;i<n;i++)
		{
			int x;
		    cin>>x;	
			if(x<0){
				x=(-1)*x;
			}
             v.push_back(x);
			
		}

		int ans=v[0];
		for(int i=0;i<v.size()-1;i++)
		{
	
            ans=min(ans,min(v[i],v[i+1]));
		}
		cout<<ans<<"\n";
		
      

	}
