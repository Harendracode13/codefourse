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
        int arr[n][n];
        int c_v = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
        for (int k = 0; k < 2*n; k++)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (arr[i][j] == c_v)
                        c_v++;
                }
            }
        }
        cout << c_v << " ";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 1; j++)
            {
                cout << arr[i][j] << " ";
            }
            for (int j = 1; j < n && i == n - 1; j++)
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << "\n";
    }
}