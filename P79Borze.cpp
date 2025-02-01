#include<bits/stdc++.h>
using namespace std;

int main() {
    string s,a="-.";
    cin >> s;
    for(int i=0;i<s.length();i++){
        if(s[i]==a[0]){
            if(s[i+1]==a[1])
            {
                 cout << "1";
            }
            else 
            {
                cout << "2";
            }
            i++;
        }
        else cout << "0";
    }
}