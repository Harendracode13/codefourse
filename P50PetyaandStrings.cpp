#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string s1;
    cin >> s;
    cin >> s1;
    int sum = 0;
    int sum1 = 0;
    for (auto &x : s)
    {
        x = toupper(x);
    }
    for (auto &x : s1)
    {
        x = toupper(x);
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (int(s[i]) < int(s1[i]))
        {
            cout << "-1";
            return 0;
        }

        if (int(s[i]) > int(s1[i]))
        {
            cout << "1";
            return 0;
        }
    }
    cout << "0";
    return 0;
}