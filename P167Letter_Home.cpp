#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int minvalue, maxvalue, step;
        minvalue = v[0];
        maxvalue = v[n - 1];
        if (minvalue == maxvalue || minvalue >= s)
        {
            step = abs(maxvalue - s);
        }
        else if (maxvalue <= s)
        {
            step = abs(s - minvalue);
        }
        else
        {
            step = abs(min(s - minvalue, maxvalue - s));
            step += abs(maxvalue - minvalue);
        }
        cout << step << endl;
    }
    return 0;
}