#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool solve(int n, int k, vector<int>& arr) {
    vector<int> sortedArr = arr;

  if(k==1 && !is_sorted(sortedArr.begin(),sortedArr.end()))
  {
    return false;
  }
  else
  {
    return true;
  }
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
        cout << (solve(n, k, arr) ? "YES" : "NO") << endl;
    }
    return 0;
}
