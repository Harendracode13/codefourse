#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        if(a==b && b==c){
            cout<<1<<" "<<1<<" "<<1<<"\n";
        }
        else if(abs(a - b) % 2 == 0 && abs(b - c) % 2 == 0 && abs(a - c) % 2 == 0)
        {
            cout<<1 << " " << 1 << " " << 1 << "\n";    
        }
        else if (abs(a - b) % 2 == 0)
        {
            cout << 0 << " " << 0 << " " << 1 << "\n";
        }
        else if (abs(a - c) % 2 == 0)
        {
            cout << 0 << " " << 1 << " " << 0 << "\n";
        }
        else if (abs(b - c) % 2 == 0)
        {
            cout << 1 << " " << 0 << " " << 0 << "\n";
        }
        else
        {
            cout << 1 << " " << 1 << " " << 1 << "\n";
        }
    }
}