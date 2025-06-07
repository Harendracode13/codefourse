#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		int ans = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			ans = max(ans, a[i] + i / 2 + (n - 1 - i) / 2 + 1);
		}
		cout << ans << '\n';
	}
}