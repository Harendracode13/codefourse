#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;
        long long min_total = n * (a - b);
        long long max_total = n * (a + b);
        long long min_pack = c - d;
        long long max_pack = c + d;
        if (max(min_total, min_pack) <= min(max_total, max_pack)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}