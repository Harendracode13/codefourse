#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        int divisors = 0;
        int x = i;
        for (int p = 2; p <= x; ++p) {
            if (x % p == 0) {
                ++divisors;
                while (x % p == 0) x /= p;
            }
        }
        if (divisors == 2) ++count;
          
        
    }
    cout << count << endl;
    return 0;
}