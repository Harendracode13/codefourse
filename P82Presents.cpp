#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
  vector<int> v(n),a(n);
    for(int i=0;i<n;i++)
	{
		 cin >> v[i];
	}
    for(int i=0;i<n;i++) 
	{
		a[v[i]-1]= i+1;
	}
    for(int i=0;i<n;i++)
	{
		 cout << a[i] << " ";
	}
}