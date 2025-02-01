#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t,n,a,b;
    cin >> t;
    while(t)
    {
        cin >> n ;
        a = n%10;
        b = (n/10)%10;
        cout << a+b << endl;
        t--;
    }
}