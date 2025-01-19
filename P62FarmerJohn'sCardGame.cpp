#include<bits/stdc++.h>
using namespace std;
int fib(int a1, int a2, int a3, int a4, int a5){
    int b=0;
    if (a3 == a1 + a2) b++;
    if (a4 == a2 + a3) b++;
    if (a5 == a3 + a4) b++;
    return b;
}
int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++) {
        int a1,a2,a4,a5,max,d;
        cin >> a1 >> a2 >> a4 >> a5;
        int a3 = a1 + a2;
        max = fib(a1,a2,a3,a4,a5);
        a3 = a5 - a4;
        d = fib(a1,a2,a3,a4,a5);
        if(d>max) max = d;
        a3 = a4 - a2;
        d = fib(a1,a2,a3,a4,a5);
        if(d>max) max = d;
        cout << max << endl;
    }
}