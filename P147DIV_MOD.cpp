#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long l, r, a;
        cin >> l >> r >> a;
        long long ans = r / a + r % a;
        long long x = (r / a) * a - 1;
        if (x >= l) {
            ans = max(ans, x / a + x % a);
        }
        cout << ans << endl;
    }
}