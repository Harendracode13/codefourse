#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
       bool ans = true;
        for(int i = 0; i < n; i++) {
            if(b[i] - a[i]!=1 && b[i] - a[i]!=0)
            {
                ans = false;
                break;
            }
        }
        if(ans) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}