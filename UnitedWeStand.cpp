#include <bits/stdc++.h>
using namespace std;

void solve(int n, vector<int> &v)
{
    map<int, int> mp;

    // Count the frequency of each element
    for (auto i : v)
    {
        mp[i]++;
    }

    if (mp.size() == 1)
    {
        cout << -1 << "\n"; // Fixed stray character
    }
    else
    {
        // Extract the first element and its frequency
        auto it = mp.begin();
        int ele = it->first;
        int fre = it->second;

        cout << fre << " " << n - fre << "\n";

        // Print the first element 'fre' times
        for (int i = 0; i < fre; i++)
        {
            cout << ele << " ";
        }
        cout << "\n";

        // Erase the first element
        mp.erase(it);

        // Print the remaining elements
        for (auto it1 :mp )
        {
           
            for (int i = 0; i <it1.second; i++) // Fixed syntax
            {
                cout << it1.first << " ";
            }
        }
        cout << "\n"; // Added missing semicolon
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n); // Initialize vector with size n
        for (int i = 0; i < n; i++)
        {
            cin >> v[i]; // Read input directly into vector
        }
         
        solve(n, v);
    }
    return 0;
}
