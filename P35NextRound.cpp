#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int temp = v[k - 1];
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] >= temp && v[i] > 0) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
