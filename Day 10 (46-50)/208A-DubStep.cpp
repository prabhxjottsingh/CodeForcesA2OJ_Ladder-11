/*

Problem Link:
https://codeforces.com/problemset/problem/208/A

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string ans;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i = i + 2;

            ans = ans + " ";
        }
        else
            ans = ans + s[i];
    }

    cout << ans;
    return 0;
}