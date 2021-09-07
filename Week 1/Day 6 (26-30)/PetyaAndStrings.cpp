/*

Problem link:
https://codeforces.com/problemset/problem/112/A

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int n = a.length(), suma = 0, sumb = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 92)
        {
            a[i] += 32;
        }
        if (b[i] < 92)
        {
            b[i] += 32;
        }
    }
    if (a == b)
    {
        cout << "0";
    }
    else if (a > b)
    {
        cout << "1";
    }
    else if (b > a)
        cout << "-1";

    return 0;
}