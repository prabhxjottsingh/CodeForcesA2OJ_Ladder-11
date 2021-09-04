/*

Problem Link:
https://codeforces.com/problemset/problem/320/A

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int i;
    cin >> s;
    int n = s.size();
    for (i = 0; i < n; i++)
    {
        if (s[i] == '1' && s[i + 1] == '4' && s[i + 2] == '4')
        {
            i = i + 2;
        }
        else if (s[i] == '1' && s[i + 1] == '4')
            i = i + 1;
        else if (s[i] == '1')
        {
        }
        else
            break;
    }
    if (i == (n))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}