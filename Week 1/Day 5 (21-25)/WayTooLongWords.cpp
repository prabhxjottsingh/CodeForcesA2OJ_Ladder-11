/*

Problem Link:
https://codeforces.com/problemset/problem/71/A

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.length() <= 10)
            cout << s;
        else
        {
            cout << s[0];
            cout << s.length() - 2;
            cout << s[s.length() - 1];
        }
        cout << endl;
    }
    return 0;
}