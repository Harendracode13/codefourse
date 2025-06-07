#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, H, M;
        cin >> n >> H >> M;
        int sleep_time = 24 * 60; // max possible minutes in a day
        for (int i = 0; i < n; ++i) {
            int h, m;
            cin >> h >> m;
            int alarm_minutes = h * 60 + m;
            int bed_minutes = H * 60 + M;
            int diff = alarm_minutes - bed_minutes;
            if (diff < 0) diff += 24 * 60;
            sleep_time = min(sleep_time, diff);
        }
        cout << sleep_time / 60 << " " << sleep_time % 60 << endl;
    }
    return 0;
}