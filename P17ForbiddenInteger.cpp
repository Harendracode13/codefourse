#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n,k,x;
	cin>>n>>k>>x;
	int remin =n%k;
	   int divi=n/k;
	   int ans =divi;

	 if (x == 1 && k == 1) {
        cout << "NO\n";
        return;
    }

    if (x == 1 && k == 2 && n % 2 != 0) {
        cout << "NO\n";
        return;
    }
	else{
		cout<<"Yes\n";
       if(x==1){
	   cout<<ans<<"\n";
	    for(int i=0;i<divi;i++)
	   {
		cout<<k<<" ";
	   }
	   }
	   else{
		  cout<<n<<"\n";
		 for(int i=0;i<n;i++)
	   {
		cout<<1<<" ";
	   }
	 
	   }
	   
	  
	   cout<<"\n";
	}
	return ;
}

int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		solve();
	}
	
}