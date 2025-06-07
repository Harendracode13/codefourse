#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x;
        cin >> x;
        double steps = 0;
        double energy = 1;
        while (energy <= x)
        {
            energy *= 1.43;
            steps++;
        }
        steps=steps + 2;
        cout << steps << endl;
    }
    return 0;
}
