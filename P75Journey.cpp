#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, a, b, c;
        cin >> n >> a >> b >> c;
        long long total = a + b + c;

        long long full_total = n / total;
        long long remaining = n % total;

        if (remaining == 0) {
            cout << full_total * 3 << "\n";
            continue;
        }

        long long cnt = full_total * 3;
        if (remaining > 0) {
            remaining -= a;
            cnt++;
        }
        if (remaining > 0) {
            remaining -= b;
            cnt++;
        }
        if (remaining > 0) {
            remaining -= c;
            cnt++;
        }

        cout << cnt << "\n";
    }

    return 0;
}
