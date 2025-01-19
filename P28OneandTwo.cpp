#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);

    int twos = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] == 2) {
            twos++;
        }
    }

    if (twos % 2 != 0) {
        cout << -1 << "\n";
        return;
    }
    int current = 0; 
    int half_twos = twos / 2;

    for (int i = 0; i < n; i++) {
        if (v[i] == 2) {
            current++;
        }
        if (current == half_twos) {
            cout << i + 1 << "\n";
            return;
        }
    }
    cout << -1 << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
