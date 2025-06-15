#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int first1 = -1;
        int last1 = -1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 1)
            {
                first1 = i;
                last1 = i;
                for (i = i + 1; i < n; i++)
                {
                    if (v[i] == 1)
                    {
                        last1 = i;
                    }
                }
            }
        }
       // cout<<first1<<last1<<endl;
        if ((last1 - first1 + 1 <= x) || first1 == -1)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
}