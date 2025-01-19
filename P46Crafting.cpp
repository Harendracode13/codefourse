#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    long long sum_a = 0, sum_b = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum_a += a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        sum_b += b[i];
    }
	if (sum_a < sum_b) {
        cout << "NO\n";
        return;
    }
	
    for (int i = 0; i < n; i++) {
        if (a[i] < b[i]) {
           sum_a=sum_a -(n-2);
		   if(sum_a<sum_b)
		   {
			cout<<"No\n";
			  return;
		   }
        }
    }
    cout << "YES\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
