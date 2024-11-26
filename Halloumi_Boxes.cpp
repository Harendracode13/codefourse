#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canSortWithReverses(int n, int k, vector<int>& arr) {
    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end());

    for (int i = 0; i < k; ++i) {
        vector<int> originalSegment, sortedSegment;
        for (int j = i; j < n; j += k) {
            originalSegment.push_back(arr[j]);
            sortedSegment.push_back(sortedArr[j]);
        }
      
        sort(originalSegment.begin(), originalSegment.end());
        if (originalSegment != sortedSegment) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        cout << (canSortWithReverses(n, k, arr) ? "YES" : "NO") << endl;
    }
    return 0;
}
