#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        long long lhs = a * d;
        long long rhs = b * c;

        if (lhs == rhs) {
            cout << "0\n";
        } else if (lhs == 0 || rhs == 0) {
            cout << "1\n";
        } else if (lhs % rhs == 0 || rhs % lhs == 0) {
            cout << "1\n";
        } else {
            cout << "2\n";
        }
    }
    return 0;
}