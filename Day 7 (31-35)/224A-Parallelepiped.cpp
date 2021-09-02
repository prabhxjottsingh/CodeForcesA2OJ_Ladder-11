/*

Problem Link:
https://codeforces.com/problemset/problem/224/A

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int x = sqrt((a * b) / c);
    int y = sqrt((c * a) / b);
    int z = sqrt((c * b) / a);
    cout << (x + y + z) * 4;
    return 0;
}