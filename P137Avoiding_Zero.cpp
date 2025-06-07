#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        if (sum == 0)
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
            if (sum > 0)
            {
                sort(v.begin(), v.end(), greater<int>());
            }
            else
            {
                sort(v.begin(), v.end());
            }
            for (int i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
             cout<<"\n";
        }
       
    }
}
