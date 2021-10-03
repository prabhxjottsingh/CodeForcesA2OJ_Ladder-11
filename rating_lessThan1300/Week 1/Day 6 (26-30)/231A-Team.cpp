/*

Problem link:
https://codeforces.com/problemset/problem/231/A

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        int p, q, r;
        cin >> p >> q >> r;
        if (p == 1 && q == 1)
            c++;
        else if (q == 1 && r == 1)
            c++;
        else if (p == 1 && r == 1)
            c++;
    }
    cout << c;
    return 0;
}