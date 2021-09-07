/*

Problem Link:
https://codeforces.com/problemset/problem/151/A

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int x = (k * l) / nl;
    int y = (c * d);
    int z = (p / np);
    int ans = min(min(x, y), z);
    cout << ans / n;
    return 0;
}