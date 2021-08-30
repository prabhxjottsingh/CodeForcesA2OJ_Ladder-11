/*

Problem Link:
https://codeforces.com/problemset/problem/61/A

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b, str;
    cin >> a >> b;
    int n = a.length();
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
            str = str + '0';
        else
            str = str + '1';
    }
    cout << str;
    return 0;
}
