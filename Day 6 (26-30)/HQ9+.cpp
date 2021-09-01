/*

Problem link:
https://codeforces.com/problemset/problem/133/A

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length(), c = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
            c++;
    }
    if (c > 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}