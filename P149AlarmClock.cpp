#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        long long ans = a - b;
        if (ans <= 0)
        {
            cout << b << "\n";
        }
        else
        {
            if (c - d <= 0)
            {
                cout << -1 << "\n";
            }
            else if(ans%(c-d)==0) 
            {
            long long opertions=ceil(ans/(c-d)); 
                cout << b + opertions * c<<"\n";
            }
            else{
                long long opertions=ceil(ans/(c-d)); 
                cout << b +( opertions+1)* c << "\n";      
            }
        }
    }
}
